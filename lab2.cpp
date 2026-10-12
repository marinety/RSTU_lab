#include <iostream>
#include <cmath>

int main(){
    int n = 1;
    double a = 1.0;
    double sum = 0.0;
    double ee = 1e-4;
    double factorial = 1

    while (std::abs(a) >= ee){
        n++;
        double a_n = (pow(n,3) / factorial) / ((3 * n - 5) * (3 * n - 4) * (3 * n - 3));
        a *= a_n;
        sum += a;
    }
    std::cout << "Сумма ряда: " << sum << std::endl;

    return 0;
}