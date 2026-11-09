#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int MAX = 25;
    int a[MAX][MAX];
    int sum_arr[MAX];
    int N;

    cout << "Ведите размерность матрицы (0 < N <= 25):\n ";
    cin >> N;

    cout << "Матрица:\n";

    for (int i = 0; i < N; i++) {
        sum_arr[i] = 0;

        for (int j = 0; j < N; j++) {
            cin >> a[i][j];
            sum_arr[i] += a[i][j];
        }
    }
    
    cout << endl;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << setw(6) << a[i][j];
        }
        cout << endl;
    }

    cout << "Массив сумм строк:\n";

    for (int i = 0; i < N; i++) {
        cout << setw(6) << sum_arr[i];
    }

    cout << endl;
    return 0;
}