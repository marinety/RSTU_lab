#include <iostream>
using namespace std;

int nod(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int nok_two(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (a * b) / nod(a, b);
}

int nok(int k, ...) {
    int *p = &k; 
    int s = *(++p); 
    k--;             
    
    for ( ; k > 0; k--) {
        int next_num = *(++p); 
        s = nok_two(s, next_num);
    }
    
    return s;
}

int main() {
    cout << "НОК(4, 6, 8) = " << nok(3, 4, 6, 8) << endl;
    cout << "НОК(2, 3, 4, 5, 6) = " << nok(5, 2, 3, 4, 5, 6) << endl;
    cout << "НОК(3, 5, 10, 15, 20, 30) = " << nok(6, 3, 5, 10, 15, 20, 30) << endl;

    return 0;
}