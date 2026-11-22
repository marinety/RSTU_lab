#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    const int N = 100;
    int a[N];
    int n, k;

    cout << "Введите количество элементов массива (от 1 до " << N - 2 << "): ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }

    cout << "Исходный массив: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Введите номер K от 1 до " << n << ": ";
    cin >> k;
    k--;

    cout << "Обход кольца c K ";
    for (int i = 0; i < n; i++)
    {
        cout << a[(k + i) % n] << " ";
    }
    cout << endl;

    int first_el = a[0];
    int last_el = a[n - 1];

    a[n] = first_el;
    a[n + 1] = last_el;
    n += 2; 

    cout << "Массив после добавления первого и последнего элементов: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    int i = 0;
    while (i < n)
    {
        if (a[i] % 2 == 0)
        {
            for (int j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            n--;
        }else
        {
            i++;
        }
    }

    if (n > 0)
    {
        k = k % n; 

        cout << "Последний обход кольца начиная с элемента K: ";
        for (int i = 0; i < n; i++)
        {
            cout << a[(k + i) % n] << " ";
        }
        cout << endl;
    }

    return 0;
}