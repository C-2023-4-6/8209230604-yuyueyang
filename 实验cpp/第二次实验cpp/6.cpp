#include<iostream>
using namespace std;
int main() {
	int a, b, c, d, e;
	cout << "输入的两个数字分别为：";
	    cin >> a;
		cin >> b;
	int num1, num2;
	num1 = a;
	num2 = b;
	if (a < b) {
		int num;
		num = b;
		b = a;
		a = num;
	}
	for (; ;) {
		if (a % b != 0) {
			c = a % b;
			a = b;
			b = c;
		}
		else {
			d = b;
			e = num1 * num2 / d;
			cout << "这两个数的最大公约数为：" << d << endl;
			cout << "这两个数的最小公倍数为：" << e << endl;
			break;
		}
	}
	return 0;
}
