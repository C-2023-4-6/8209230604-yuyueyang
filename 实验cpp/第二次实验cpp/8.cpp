#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "�����aΪ��";
	cin >> a;
	c = a;
	FLAG:
	b = (a + c / a) / 2;
	if (a - b > -1e-10 && a - b < 1e-10) {
		cout << "a��ƽ����Ϊ��" << b << endl;
	}
	else {
		a = b;
		goto FLAG;
	}
	return 0;
}
