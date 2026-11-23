//уменьшить длину динамического массива
#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int* arr = new int[n]{4, 78, 54, 3, 21};

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int m = 3;
    int* newArr = new int[m];

    for (int i = 0; i < m; i++){
        newArr[i] = arr[i];
    }

    delete[] arr;

    arr = newArr;

    for (int i = 0; i < m; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}