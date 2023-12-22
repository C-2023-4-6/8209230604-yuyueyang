#include<iostream>
using namespace std;
int main() {
	double a, b, c, C;
	cout << "三角形三边的边长分别为：";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a ) {
		C = a + b + c;
		cout << "三角形的周长为：" << C << endl;
		if (a == b || a == c || b == c) {
			cout << "该三角形是等腰三角形" << endl;
		}
		else {
			cout << "该三角形不是等腰三角形" << endl;
		}
	}
	else {
		cout << "该三边不能组成三角形" << endl;
	}
	return 0;
}