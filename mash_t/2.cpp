// 11+1 -> 111
#include <iostream>
using namespace std;

int main() {
    char t[] = "11+1";
    int head = 0;
    int state = 0;

    while (state != -1) {
        if (state == 0) {
            if (t[head] == '1') {
                head++;
            } else if (t[head] == '+') {
                t[head] = '1';
                head++;
                state = 1;
            }
        } else if (state == 1) {
            if (t[head] == '1') {
                head++;
            } else if (t[head] == '\0') {
                head--;
                state = 2;
            }
        } else if (state == 2) {
            if (t[head] == '1') {
                t[head] = '\0';
                state = -1;
            }
        }
    }
    cout << " 11+1 -> " << t << endl;
    return 0;
}