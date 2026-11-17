#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Введите слово: ";
    cin >> word;

    char b = word[0];
    word[0] = word[1];
    word[1] = b;

    cout << "Результат: " << word << '\n';
    return 0;
}