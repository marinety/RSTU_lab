// 11+1 -> 111

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin>>s;

    string tape = '-' + s + '-';
    int head = 1;
    int state = 0;

    while (state != -1){
        if (state ==0){
            if (tape[head] == '1'){
                head++;
            }else if (tape[head] == '+'){
                tape[head] = '1';
                head++;
                state = 1;
            }
        }else if (state == 1){
            if (tape[head] == '1'){
                head--;
                state = 2;
            }
        }else if (state == 2){
            if (tape[head] == '1'){
                tape[head] = '-';
                state = -1;
            }
        }
    }
    for (char c : tape){
        if (c != '-') cout <<c;
    }
    return 0;
}