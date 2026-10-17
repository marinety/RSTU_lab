#include <iostream>

int main()
{
    int m,n,result;

    std::cout << "Enter m" << std::endl;
    std::cin >> m;

    std::cout << "Enter n" << std::endl;
    std::cin >> n;

    result = ++n * m;
    std::cout << "res1:" << result << std::endl;

    result = ++n<m;
    std::cout << "res2:" << result << std::endl;

    result = --m> m;
    std::cout << "res3:" << result << std::endl;

    return 0;
}