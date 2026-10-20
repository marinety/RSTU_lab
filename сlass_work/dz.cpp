#include <iostream>
using namespace std;

int main()
{
    int h1, h2, m1, m2;

    cout << " Введите время начала ";
    cin >> h1 >> m1;

    cout << "Введите время конца ";
    cin >> h2 >> m2;

    if (h1 >= 24 || h2 >= 24 || m1 >= 60 || m2 >= 60 || h1 < 0 || h2 < 0 || m1 < 0 || m2 < 0)
    {
        cout << "Неверно." << endl;
        return 1;
    }

    int T_m_1 = h1 * 60 + m1;
    int T_m_2 = h2 * 60 + m2;

    int diff_m = T_m_2 - T_m_1;

    if (diff_m < 0) 
    {
        diff_m += 24 * 60;
    }

    int result_h = diff_m / 60;
    int result_m = diff_m % 60;

    cout << "Прошло времени: " << result_h << "ч. " << result_m << "мин. " << endl;

    return 0;
}