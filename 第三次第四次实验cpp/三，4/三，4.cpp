#include<iostream>
#include"mytriangle.h"
using namespace std;
bool is_valid(double side1, double side2, double side3) {
	if (side1 + side2 > side3 && side3 + side2 > side1 && side1 + side3 > side2) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	double a, b, c;
	double d;
	cin >> a >> b >> c;
	
	if (is_valid(a, b, c) == 1) {
		d = is_area(a, b, c);
		cout << "�������ε����Ϊ��" << d << endl;
	}
	else {
		cout << "�����߲������������" << endl;
	}
	system("pause");
	return 0;
}
