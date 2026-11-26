#include <iostream>
using namespace std;

int main() {
    const int m = 100;
    int a[m], n;

    cout << "Введите количество элементов: ";
    cin >> n;

    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int min = a[0], max = a[0];
    int minIndex = 0, maxIndex = 0;
    int minCount = 0, maxCount = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
            minIndex = i;
        }
        if (a[i] > max) {
            max = a[i];
            maxIndex = i;
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == min){
            minCount++;
        } 
        if (a[i] == max){
            maxCount++;
        } 
    }

    cout << "Минимум: " << min
         << ", первый индекс: " << minIndex
         << ", количество: " << minCount << '\n';

    cout << "Максимум: " << max
         << ", первый индекс: " << maxIndex
         << ", количество: " << maxCount << '\n';

    return 0;
}