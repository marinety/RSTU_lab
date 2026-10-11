#include <iostream>
#include <cmath>

double doubleResult();
float floatResult();

int main() {
    double resultDouble = doubleResult();
    std::cout << "result double:" << resultDouble << std::endl;

    float resultFloat = floatResult();
    std::cout << "result float:" << resultFloat << std::endl;

    return 0;
}

double doubleResult() {
    double a = 1000;
    double b = 0.0001;

    double numerator = pow(a-b, 3) - pow(a,3);
    double denominator = pow(b,3) -3*a*pow(b,2) - 3*pow(a,2)*b;
    double result = numerator / denominator;

   return result;
}

float floatResult() {
    float a = 1000;
    float b = 0.0001;

    float numerator = pow(a-b, 3) - pow(a,3);
    float denominator = pow(b,3) -3*a*pow(b,2) - 3*pow(a,2)*b;
    float result = numerator / denominator;

   return result;
}
