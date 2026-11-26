// 101 -> 010 
#include <iostream>
using namespace std;

int main() {
     
    char t[] = "101";
    int head = 0;
    int state = 0;

    while (state != -1) {
        if (state == 0) {
            if (t[head] == '1') {
                t[head] = '0';
                head++;
            } else if (t[head] == '0') {
                t[head] = '1';
                head++;
            } else if (t[head] == '\0') {
                state = -1;
            }
        }
    }
     cout << " 101 -> " << t << endl;
     return 0;
}