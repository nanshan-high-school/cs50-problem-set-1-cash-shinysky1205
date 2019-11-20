#include <iostream>
using namespace std;

int main() {
    int money;
    cout << "請輸入想換算的金額";
    cin >> money;
    for (int cash = money ; cash != 0; cash = cash){
        if (cash >= 1000) {
            cout << cash / 1000 << "張一千塊";
            cash %= 1000;
        }else if (cash >= 100) {
            cout << cash / 100 << "個一百塊";
            cash %= 100;
        }else if (cash >= 10) {
            cout << cash / 10 << "個十塊";
            cash %= 10;
        }else {
            cout << cash << "個一塊";
            cash = 0;
        }
    }
}
