#include <iostream>
using namespace std;

int main() {
    const int n = 7;
    int a[n];

    cout << "Введите 7 чисел: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex])
                minIndex = j;
        }

        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

    cout << "Результат: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}