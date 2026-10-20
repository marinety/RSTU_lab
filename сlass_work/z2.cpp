#include <iostream>
using namespace std;

int main()
{
    int a1, a2, b1, b2;
    
    cout << "Введите границы первого отрезка";
    cin >> a1 >> b1;

    cout << "Введите границы второго отрезка";
    cin >> a2 >> b2;

    int start = max(a1,a2);
    int end = min(b1,b2);

    if (start <= end)
    {
        cout << "отрезки пересекаются" << endl;
        int length = end - start;
        cout << "длина перекрытия " << length << endl;

        if ((a1 <= a2 && b1 >= b2) || (a2 <= a1 && b2 >= b1))
        {
            cout << "отрезок полностью перекрывает другой" << endl;
        } else {
            cout << "отрезок частично перекрывает другой" << endl;
        }
    } else {
        cout << "отрезки не пересекаются" << endl;
        cout << "длина пересечения = 0" << endl;
        cout << "нет полного перекрытия" << endl;
    }
    return 0;
}
