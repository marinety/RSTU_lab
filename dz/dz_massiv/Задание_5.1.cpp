#include <iostream>
using namespace std;

int main() {
    const int n = 7;
    int a[n];

    cout << "Введите 7 чисел: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i < n; i++) {
        int b = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > b) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = b;
    }

    cout << "Результат: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}