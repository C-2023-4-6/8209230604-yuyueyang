#include<iostream>
using namespace std;
int main() {
	int a, b, c, d, e;
	cout << "������������ֱַ�Ϊ��";
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
			cout << "�������������Լ��Ϊ��" << d << endl;
			cout << "������������С������Ϊ��" << e << endl;
			break;
		}
	}
	return 0;
}
