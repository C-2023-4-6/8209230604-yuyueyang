#include<iostream>
using namespace std;
int add(int num1, int num2) {
	int num3;
	if (num1 < num2) {
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}
	if(num1 % num2 != 0) {
		num3 = num1 % num2;
		num1 = num2;
		num2 = num3;
	}
	return num3;
}
int main() {
	int m, n;
	cin >> m;
	cin >> n;
	int c = add(m, n);
	cout << "m��n���������Ϊ��" << c << endl;
	int d = m * n / c;
	cout << "m��n����С������Ϊ��" << d << endl;
	system("pause");
	return 0;
}