#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, a, b, y;
    cout << "Ввести перменные:";
    cin >> x >> a >> b;

    if (x < 0)
    {
        y = a * pow(x, 2) + b;
    }
    else if (0 <= x && x <= 10)
    {
        y = (a + b) * x;
    }
    else
    {
        y = x / (pow(a, 2) + pow(b, 2) + 1);
    }
    cout << "y = " << y << endl;
    return 0;
}