#include <iostream>

using namespace std;

void printCircular(int arr[], int length, int k);

int main() 
{
    const int N = 100;
    int a[N];
    int elements = 0;
    int k;

    cout << "Введите начальное количество элементов массива: ";
    cin >> elements;
    cout << " Введите элементы массива" << endl;
    for (int i = 0; i < elements; i++)
    {
        cin >> a[i];
    }
    cout << "Введите индекс К для начала отсчета (1-" << elements << "): ";
    cin >> k;
    k--;

    cout << "2) Кольцевая печать с " << k + 1 << "-го элемента:" << endl;
    printCircular(a, elements, k);

    if (elements > 0 && elements +2 <= N)
    {
        int first = a[0];
        int last = a[elements - 1];
        a[elements] = first;
        a[elements +1] = last;
        elements +=2;
        cout << "3) Добавлены элементы " << first << " и " << last << " текущая длина: "<< elements << endl;
    }
        int new_size = 0;
        for (int i = 0; i < elements; i++)
        {
            if (a[i] % 2 != 0) 
            {
                a[new_size] = a[i];
                new_size ++;
            }
        }
        elements = new_size;
        cout << "4) Четные элементы удалены. Новая длина: " << elements << endl;
        cout << "5)  Итоговое кольцо: " << endl;
        printCircular(a, elements, k);
        return 0; 
}
void printCircular(int arr[], int length, int k)
{
    if (length == 0)
    {
        cout << "Кольцо пустое" << endl;
        return;
    }
    int start = k % length;
    for (int i = 0; i < length; i++)
    {
        cout << arr[(start +i) % length] << " ";
    }
    cout << endl;
}
