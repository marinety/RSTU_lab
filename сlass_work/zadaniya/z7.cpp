#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "Введите размер n ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int l = 1; l <= 2* i -1; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int l = 1; l <= 2* i -1; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int l = 1; l <= 2* i -1; l++)
        {
            if (l == 1 || l == 2 * i - 1)
            {
                cout << "*";
            } else{
                cout << " ";
            }
                
            }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int l = 1; l <= 2* i -1; l++)
        {
            if (l == 1 || l == 2 * i - 1)
            {
                cout << "*";
            } else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}