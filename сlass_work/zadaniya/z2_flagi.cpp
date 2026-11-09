#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "введите кол-во элементов ";
    cin >> n;

    int pred_el;
    int tek_el;
    bool a = false;

    cin >> pred_el;

    for (int i = 1; i < n; i++){
        cin >> tek_el;
        if (tek_el == pred_el){
            a = true;
        }
        pred_el = tek_el;
    }

    if (a){
        cout << "есть два соседних одинаковых элемента";
    } else{
        cout << " нет два соседних одинаковых элемента";
    }

    return 0;
}