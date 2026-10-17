#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a = 0.1;
    double b = 0.8;
    int k = 10;
    double i = (b-a) / k;
    int n = 50;
    double eps = 0.0001;

    for (double x = a; x <= b + 0.000001; x += i) 
    {
        double SN = 0.0;
        double SE = 0;
        double row = 0;
        int l = 1;
        double Y = 0.5 - (M_PI / 4.0) * abs(sin(x));

        for (int j = 1; j <= n; j++)
        {
            SN += cos(2 * j * x) / (4 * pow(j,2) - 1);
        }

        do {
            row = cos(2 * l * x) / (4 * pow(l,2) - 1);
            SE += row;
            l++;
        } while (abs(row) > eps);

        cout << fixed << setprecision(6) 
             << "X = " << setw(8) << x << " "
             << "SN = " << setw(8) << SN << " "
             << "SE = " << setw(8) << SE << " "
             << "Y = " << setw(8) << Y << " " << endl;
    }
    return 0;
}
