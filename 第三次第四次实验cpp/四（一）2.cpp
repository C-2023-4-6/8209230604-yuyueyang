#include<iostream>
using namespace std;

void bs(double num1, double num2, double num3, double num4, double num5, double num6, double num7, double num8, double num9, double num10) {
    double list[10] = { num1,num2,num3,num4,num5,num6,num7,num8,num9,num10 };
    bool changed = true;
    do
    {
        changed = false;
        for (int j = 0; j < 10 - 1; j++)
            if (list[j] > list[j + 1])
            {
                double temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;

                changed = true;
            }
    } while (changed);

    cout << "排列后的数字为：" << endl;
    for (int m = 0; m < 10; m++) {
        cout << list[m] << endl;
    }
}

int main() {
    double a, b, c, d, e, f, g, h, i, j;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
    bs(a, b, c, d, e, f, g, h, i, j);
    return 0;
}