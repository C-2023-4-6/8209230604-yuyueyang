#include<iostream>
#include<iomanip>
using namespace std;
bool is_prime(int num);
bool is_prime(int num) {
    int i = 2;
    int num2 = 0;
    for (int i=2; i < num; i++) {
        if (num % i == 0) {
            num2 += 1;
        }
    }
    if (num2 == 0) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    int a;
    int c = 2;
    cin >> a;
    bool b = is_prime(a);
    cout << boolalpha;
    cout << "该整数是否为素数：" << b << endl;
    cout << noboolalpha;
    for (int m = 0; m < 200;c++){
        if (is_prime(c) == 1) {
            cout << c << " ";
            m++;
            if (m % 10 == 0) {
                cout << endl;
            }
        }
    }
    system("pause");
    return 0;
}