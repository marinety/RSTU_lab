#include <iostream>
#include <string>
using namespace std;

int main() {
    string number;
    cout << "Введите двоичное число: ";
    cin >> number;

    for (char& digit : number) {
        if (digit == '0')
            digit = '1';
        else if (digit == '1')
            digit = '0';
        
    }

    cout << "Результат: " << number << '\n';
    return 0;
}