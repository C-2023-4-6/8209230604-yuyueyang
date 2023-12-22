#include<iostream>
using namespace std;
int main() {
	double r, h, s;
	const double pi = 3.1415;
	cout << "圆锥体的底面半径为:";
		cin >> r;
	cout << "圆锥体的高为：";
		cin >> h;
	s = pi * r * r * h / 3;
	cout << "圆锥体的体积为：" << s << endl;
	return 0;
}