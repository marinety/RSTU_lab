// расчет заработной платы 
#include <iostream>
#include <string>
using namespace std;

struct data {
    string fullname;
    int daysWorked;
    double payDay;
    double prize;
};

int main() {
    data worker;

    cout << "ввод ФИО работника ";
    getline(cin, worker.fullname);

    cout << "ввод отрабоатанных дней ";
    cin >> worker.daysWorked;

    cout << "ввод оплаты за день ";
    cin >> worker.payDay;

    cout << "ввод премии ";
    cin >> worker.prize;

    cout << endl;
    
    double salary = (worker.daysWorked * worker.payDay) + worker.prize;
    cout << "работник:  " << worker.fullname << "\n";
    cout << "заработная плата = " << salary << " рублей \n";
    return 0;
}