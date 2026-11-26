// подсчет дохода от показа рекламы на веб-сайте
#include <iostream>
using namespace std;

struct advertising {
    int shown;
    double pressed;
    double earned;
};

int main(){
    advertising ad;

    cout << "ввод количества показанных объявлений ";
    cin >> ad.shown;

    cout << "ввод процента посетителей, нажавших на объявление ";
    cin >> ad.pressed;

    cout << "ввод среднего заработка ";
    cin >> ad.earned;

    double income = ad.shown * (ad.pressed / 100.0) * ad.earned;
    cout << "доход от показа рекламы на веб-сайте " << income << "рублей \n";

    return 0;
}
