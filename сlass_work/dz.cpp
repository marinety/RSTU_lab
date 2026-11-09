#include <iostream>
using namespace std;

int main() {
    const int n = 7;
    int a[n];

    cout << "Введите 7 чисел:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int aa = n / 2; aa > 0; aa /= 2) {
        for (int i = aa; i < n; i++) {
            int b = a[i];
            int j = i;

            while (j >= aa && a[j - aa] > b) {
                a[j] = a[j - aa];
                j -= aa;
            }

            a[j] = b;
        }
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}