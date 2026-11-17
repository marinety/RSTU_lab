// 101 -> 010

#include <iostream>
#include <string>
#include <map>
#include <utility>
using namespace std;

int main(){
    string s;
    cin>>s;
    string tape = "-" + s + "-";
    int head = 1;
    int state = 0;

    while (state != - 1){
        if (state == 0){
            if (tape[head] == '0'){
                tape[head] = '1';
                head++;
            }else if (tape[head] == '1'){
                tape[head] = '0';
                head++;
            }else if (tape[head] == '-'){
                state = -1;
            }
        }
    }
    for (char c : tape){
        if (c != '-') cout <<c;
    }
    return 0;
}