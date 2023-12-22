#include<iostream>
using namespace std;
int main() {
	double a, b, c, d,e;
	a = 0.8;
	b = 2;
	d = 1;
	c = 0;
	e = 0;
	while (e <= 100) {
		c = c + a * b;
		e = e + b;
		b = 2 * b;
		d++;
	}
	double aver = c / d;
	cout << "购买苹果平均每天花费：" << aver << endl;
	return 0;
}