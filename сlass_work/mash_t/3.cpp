#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Введите слово: ";
    cin >> word;

    char temp = word[0];
    word[0] = word[1];
    word[1] = temp;

    cout << "Результат: " << word << '\n';
    return 0;
}