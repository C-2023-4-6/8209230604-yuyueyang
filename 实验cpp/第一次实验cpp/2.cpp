#include<iostream>
using namespace std;
int main() {
	double r, h, s;
	const double pi = 3.1415;
	cout << "Բ׶��ĵ���뾶Ϊ:";
		cin >> r;
	cout << "Բ׶��ĸ�Ϊ��";
		cin >> h;
	s = pi * r * r * h / 3;
	cout << "Բ׶������Ϊ��" << s << endl;
	return 0;
}