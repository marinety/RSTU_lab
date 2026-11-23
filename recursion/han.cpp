// ханойская башня: 3 стержня и 5 колец
#include <iostream>
#include <string>
using namespace std;

const int disks = 5;

void towers(const int kernel[3][disks], const int count[3], int step, int from, int to){

    cout << "\n шаг " << step << from + 1 << to + 1 << " \n";
    for (int level = disks - 1; level >=0; level--){
        for (int p = 0; p < 3; p++){
            string s;
            if (count[p] > level){
                int d = kernel[p][level];
                s = string(d * 2 + 1, '*');
            } else {
                s = "|";
            }
            int width = disks * 2 + 3;
            int whitespace = (width - s.length()) / 2;
            cout << string(whitespace, ' ') << s << string(whitespace, ' ') << "\t";
        }
        cout << "\n";
    }
    cout << "   a\t\t   b\t\t   c\n";
}

void hanoi(int n, int from, int to, int a, int kernel[3][disks], int count[3], int& step){
    if (n == 0) return;

    hanoi(n - 1, from, a, to, kernel, count, step);

    int disk = kernel[from][count[from] - 1];
    count[from]--;
    kernel[to][count[to]] = disk;
    count[to]++;
    step++;

    towers(kernel, count, step, from, to);

    hanoi(n - 1, a, to, from, kernel, count, step);
}

int main(){
    int kernel[3][disks] = {0};
    int count[3] = {0,0,0};

    for (int i = disks; i >= 1; i--){
        kernel[0][count[0]] = i;
        count[0]++;
    }

    towers(kernel, count, 0, 0, 0);

    int step = 0;
    hanoi(disks, 0, 2, 1, kernel, count, step);
    cout << endl;
    cout << "выполнено за " << step << " ходов";

    return 0;
}