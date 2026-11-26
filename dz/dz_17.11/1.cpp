// увеличение длины динамического массива
#include <iostream>
using namespace std;

int main(){
    int n = 3;
    int* arr = new int[n]{13, 2, 5};

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int m = 5;
    int* newArr = new int[m];

    for(int i = 0; i < n; i++){
        newArr[i] = arr[i];
    }

    newArr[3] = 45;
    newArr[4] = 5;

    delete[] arr;

    arr = newArr;

    for (int i =0; i < m; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}