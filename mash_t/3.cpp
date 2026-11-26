// abb -> bab
#include <iostream>
using namespace std;

int main() {
    char t[] = "abb";
    int head = 0;
    int state = 0;

    while (state != -1) {
        if (state == 0 && t[head] == 'a') {
            t[head] = 'b';
            head++;
            state = 1;
        } else if (state == 1 && t[head] == 'b') {
            t[head] = 'a';
            state = -1;
        }
    }
    cout << " abb -> " << t << endl;
    return 0;
}