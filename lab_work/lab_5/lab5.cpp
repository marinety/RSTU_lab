#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

const int maxsize = 20;

void Matrix(int a[maxsize][maxsize], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
}

void max(int a[maxsize][maxsize], int n, int row_start, int col_start, int size) {
    int row_end = row_start + size - 1;
    int col_end = col_start + size - 1;
    int maxVal = a[row_start][col_start];
    int maxi = row_start;
    int maxj = col_start;

    for (int i = row_start; i <= row_end; i++) {
        for (int j = col_start; j <= col_end; j++) {
            if (a[i][j] > maxVal) {
                maxVal = a[i][j];
                maxi = i;
                maxj = j;
            }
        }
    }

    if (maxi != row_start) {
        for (int j = 0; j < n; j++) {
            int temp = a[row_start][j];
            a[row_start][j] = a[maxi][j];
            a[maxi][j] = temp;
        }
    }

    if (maxj != col_end) {
        for (int i = 0; i < n; i++) {
            int temp = a[i][col_end];
            a[i][col_end] = a[i][maxj];
            a[i][maxj] = temp;
        }
    }
}

bool check(int a[maxsize][maxsize], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (a[i][n - 1 - i] <= a[i + 1][n - 1 - (i + 1)]) {
            return false; 
        }
    }
    return true;
}

int main() {
    srand(time(0));
    int n;
    cout << "введите размер матрицы N (от 2 до " << maxsize << "): ";
    cin >> n;

    int a[maxsize][maxsize];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 100;
        }
    }

    cout << "\n исходная матрица:\n";
    Matrix(a, n);

    for (int k = n; k >= 2; k--) {
        int row_start = n - k;
        int col_start = 0;
        max(a, n, row_start, col_start, k);
    }

    cout << "\n преобразованная матрица :\n";
    Matrix(a, n);

    if (check(a, n)){
        cout << "\n получилась\n";
    } else {
        cout << "\n нет\n";
    }

    return 0;
}


