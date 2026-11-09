#include <iostream>
using namespace std;

int Summ(int n)
{
    if (n < 10) {
        return n;
    }
    return (n % 10) + Summ(n / 10);
}


int main()
{
    int N = 57321;

    cout << "Рекурсивная сумма = " << Summ(N) << endl;
    return 0;
}