// все элементы главной и побочной матриц в двумерном массиве заменить на 0
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cout << "ввод n \n";
    cin >> n;

    int a[100][100];

    cout << "воод двумерного массива \n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j || i + j == n - 1){
                a[i][j] = 0;
            }
        }
    }
    cout << endl;

    cout << "матрица с нулевыми диагоналями \n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << setw(5) << a[i][j];
        }
        cout << endl;
    }
    return 0;

}