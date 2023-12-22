#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double C, F;
	cout << "华氏温度为：";
		cin >> F;
	C = (F - 32) / 1.8;
	cout <<fixed<<setprecision(2)<< "摄氏温度为：" << C << endl;
	return 0;
}