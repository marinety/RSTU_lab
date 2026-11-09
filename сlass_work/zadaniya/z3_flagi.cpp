#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "введите последовательность: ";
    cin >> n;

    bool correct = true;
    bool a = false;
    int x;

    for (int i = 0; i < n; i++){
        cin >> x;
        if (x > 0){
            a = true;
        }
        if (x < 0 && a){
            correct = false;
        }
    }
    if (correct){
        cout << "порядок верен";
    }else{
        cout << "порядок неверен ";
    }
    
    return 0;
}