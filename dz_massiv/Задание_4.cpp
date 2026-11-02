#include <iostream>
using namespace std;

int main() {
    const int m = 100;
    int a[m][m];
    int rows, cols;

    cout << "Введите количество строк и столбцов: ";
    cin >> rows >> cols;

    cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cin >> a[i][j];
        }
    }
    int maximum = a[0][0];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (a[i][j] > maximum)
                maximum = a[i][j];

    cout << "Максимальный элемент: " << maximum << '\n';
    cout << "Индексы (строка, столбец):\n";

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (a[i][j] == maximum)
                cout << "(" << i << ", " << j << ")\n";

    return 0;
}