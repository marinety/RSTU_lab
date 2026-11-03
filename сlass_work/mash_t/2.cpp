#include <iostream>
#include <string>
using namespace std;

int main() {
    string number;

    cout << "Введите последовательность: ";
    cin >> number;

    number += '1';

    cout << "Результат: " << number << endl;
    return 0;
}