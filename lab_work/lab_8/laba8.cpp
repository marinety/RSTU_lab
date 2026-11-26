#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

struct Book {
    char title[50];
    char author[50];
    int year;
    int pages;
};

Book inputBook() {
    Book b;
    cout << "Название, Автор, Год, Страниц: ";
    cin >> b.title >> b.author >> b.year >> b.pages;
    return b;
}
void createFile(const char* fname) {
    FILE* f = fopen(fname, "wb");
    if (!f) { perror("Ошибка открытия файла"); return; }

    int n;
    cout << "Сколько книг добавить (минимум 5)? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Book b = inputBook();
        fwrite(&b, sizeof(Book), 1, f);
    }
    fclose(f);
}

void printFile(const char* fname) {
    FILE* f = fopen(fname, "rb");
    if (!f) { perror("Ошибка чтения файла"); return; }

    Book b;
    cout << "\n    Содержимое файла    \n";
    while (fread(&b, sizeof(Book), 1, f) == 1) {
        cout << b.title << " | " << b.author << " | " << b.year << " г. | " << b.pages << " стр.\n";
    }
    fclose(f);
}

bool findBook(const char* fname, const char* target) {
    FILE* f = fopen(fname, "rb");
    if (!f) return false;

    Book b;
    while (fread(&b, sizeof(Book), 1, f) == 1) {
        if (strcmp(b.title, target) == 0) {
            fclose(f);
            return true;
        }
    }
    fclose(f);
    return false;
}

void deleteFirstThree(const char* fname) {
    FILE* f = fopen(fname, "rb");
    FILE* temp = fopen("temp.dat", "wb");
    if (!f || !temp) { perror("Ошибка открытия файлов"); return; }

    Book b;
    int count = 0;
    while (fread(&b, sizeof(Book), 1, f) == 1) {
        count++;
        if (count > 3) { 
            fwrite(&b, sizeof(Book), 1, temp);
        }
    }

    fclose(f);
    fclose(temp);
    remove(fname);
    rename("temp.dat", fname);
}

void addBefore(const char* fname, const char* target) {
    

    cout << "Введите данные новой книги:\n";
    Book newBook = inputBook();

    FILE* f = fopen(fname, "rb");
    FILE* temp = fopen("temp.dat", "wb");
    if (!f || !temp) { perror("Ошибка открытия файлов"); return; }

    Book b;
    while (fread(&b, sizeof(Book), 1, f) == 1) {
        if (strcmp(b.title, target) == 0) {
            fwrite(&newBook, sizeof(Book), 1, temp);
        }
        fwrite(&b, sizeof(Book), 1, temp);
    }

    fclose(f);
    fclose(temp);
    remove(fname);
    rename("temp.dat", fname);
}

int main() {
    const char* file = "books.dat";
    
    createFile(file);
    printFile(file);

    cout << "Удаляем 3 первых элемента...\n";
    deleteFirstThree(file);
    printFile(file);

    char target[50];
    cout << "Перед какой книгой (название) вставить новую? ";
    cin >> target;
    addBefore(file, target);
    printFile(file);

    return 0;
}