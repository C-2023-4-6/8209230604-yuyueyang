#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double C, F;
	cout << "�����¶�Ϊ��";
		cin >> F;
	C = (F - 32) / 1.8;
	cout <<fixed<<setprecision(2)<< "�����¶�Ϊ��" << C << endl;
	return 0;
}