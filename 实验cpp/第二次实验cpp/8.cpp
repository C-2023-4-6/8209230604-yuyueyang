#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "输入的a为：";
	cin >> a;
	c = a;
	FLAG:
	b = (a + c / a) / 2;
	if (a - b > -1e-10 && a - b < 1e-10) {
		cout << "a的平方根为：" << b << endl;
	}
	else {
		a = b;
		goto FLAG;
	}
	return 0;
}
