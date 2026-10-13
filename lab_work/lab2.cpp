#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    const double eps = 1e-4;

    int n = 1;
    double a = 1.0;  // a1 = 1^3 / 0! = 1
    double sum = a;

    do {
        n++;

        double ratio =
            (std::pow(n, 3) / std::pow(n - 1, 3)) /
            ((3 * n - 5) * (3 * n - 4) * (3 * n - 3));

        a *= ratio;   // вычисляем следующий член ряда
        sum += a;

    } while (std::abs(a) > eps);

    std::cout << std::fixed << std::setprecision(4)
              << "Сумма ряда: " << sum << std::endl;

   

    return 0;
}