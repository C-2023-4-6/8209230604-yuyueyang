#include<iostream>
using namespace std;
int main() {
	double a, b, c, C;
	cout << "���������ߵı߳��ֱ�Ϊ��";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a ) {
		C = a + b + c;
		cout << "�����ε��ܳ�Ϊ��" << C << endl;
		if (a == b || a == c || b == c) {
			cout << "���������ǵ���������" << endl;
		}
		else {
			cout << "�������β��ǵ���������" << endl;
		}
	}
	else {
		cout << "�����߲������������" << endl;
	}
	return 0;
}