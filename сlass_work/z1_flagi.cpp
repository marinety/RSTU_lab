#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "введите кол-во элементов ";
    cin >> n;

    int x;
    int minn = 0;
    int maxx = 0;
    bool first = true;

    for (int i = 0; i < n; i++){
        cin >> x;

        if (first){
            minn = x;
            maxx = x;
            first = false;
        } else {
            if (x < minn){
                minn = x;
            }
            if (x > maxx){
                maxx = x;
            }
        }
    }
    cout << "минимум: " << minn << endl;
    cout << "максимум: " << maxx << endl;

    return 0;
}