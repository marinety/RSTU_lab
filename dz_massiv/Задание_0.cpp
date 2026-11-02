#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int MAX = 100;
    int a[MAX][MAX];
    int rows, cols;

    cout << "Введите количество строк и столбцов: ";
    cin >> rows >> cols;

    cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> a[i][j];

    cout << "Суммы строк:\n";
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++)
            sum += a[i][j];

        cout << "Строка " << i + 1 << ": " << sum << '\n';
    }

    cout << "Матрица:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << setw(6) << a[i][j];
        cout << '\n';
    }

    return 0;
}