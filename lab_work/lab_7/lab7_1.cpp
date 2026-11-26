#include <iostream>
using namespace std;

// a)
int process(int n, int a[]) {
    int max_val = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max_val) {
            max_val = a[i];
        }
    }
    return max_val;
}

// б) 
int process(const char* str) {
    int max_len = 0;
    int current_len = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char c = str[i];
        if (c >= 128 && c <= 191) {
            continue;
        }
        if (str[i] != ' ' && str[i] != ',' && str[i] != '.' && str[i] != '!' && str[i] != '?') {
            current_len++;
            if (current_len > max_len) {
                max_len = current_len;
            }
        } else {
            current_len = 0;
        }
    }
    return max_len;
}

int main() {
    int n;
    cout << "введите количество элементов массива: ";
    cin >> n;

    int* arr = new int[n];
    cout << "введите массив ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_element = process(n, arr);
    cout << "Максимальный элемент массива: " << max_element << endl;

    delete[] arr;
    
    const char* text = "вчера было холодно";
    int longest_word = process(text);
    cout << "строка : " << text << endl;
    cout << "Длина самого длинного слова: " << longest_word << endl;

    return 0;
}