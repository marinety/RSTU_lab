#include <iostream>
using namespace std;

int main() {
    const int n = 7;
    int a[n];

    cout << "Введите 7 чисел: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "Результат: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
