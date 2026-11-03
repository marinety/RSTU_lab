#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Введите слово: ";
    cin >> word;

    bool palindrome = true;

    for (int i = 0, j = static_cast<int>(word.size()) - 1; i < j; i++, j--) {
        if (word[i] != word[j]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "True\n";
    else
        cout << "False\n";

    return 0;
}