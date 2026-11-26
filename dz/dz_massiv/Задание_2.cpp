#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Введите количество элементов: ";
    cin >> n;

    int previous, current;
    cin >> previous;

    int i = 1;
    bool a = true;

    while (i < n && a) {
        cin >> current;

        if (previous >= current){
            a = false;
        }
        previous = current;
        i++;
    }

    while (i < n) {
        cin >> current;
        i++;
    }

    if (a){
        cout << "Массив упорядочен по возрастанию.\n";
    }else{
        cout << "Массив не упорядочен по возрастанию.\n";
    }
    return 0;
}