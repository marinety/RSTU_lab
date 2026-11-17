// abb -> bab

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string tape = '-' + s + '-';
    int head = 1;
    int state = 0;

    while (state != -1){
        if (state == 0){
            if (tape[head] != '-'){
                head++;
            }else {
                head--;
                state = 1;
            }
        }else if (state == 1){
            if (tape[head] == 'a'){
                tape[head] = '-';
                head--;
                state = 2;
            }else if (tape[head] == 'b'){
                tape[head] = '-';
                head--;
                state = 3;
            }else {
                state = -1;
            }
        }else if (state == 2){
            if (tape[head] != '-'){
                head--;
            }else {
                tape[head] = 'a';
                state = -1;
            }
        }else if (state == 3){
            if (tape[head] != '-'){
                head--;
            }else {
                tape[head] = 'b';
                state = -1;
            }
        }
    }
    for (char c : tape){
        if (c != '-') cout << c;
    }
    return 0;
}