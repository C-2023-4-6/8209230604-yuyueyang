#include<iostream>
using namespace std;
int main() {
	int a;
	char b;
	cin >> a;
FLAG:
	cin >> b;
	if (int(b) == '+') {
		int c;
		cin >> c;
		a = a + c;
		goto FLAG;
	}
	else if (int(b) == '-') {
		int c;
		cin >> c;
		a = a - c;
		goto FLAG;
	}
	else if (int(b) == '*') {
		int c;
		cin >> c;
		a = a * c;
		goto FLAG;
	}
	else if (int(b) == '/') {
		int c;
		cin >> c;
		if (c != 0) {
			a = a / c;
			goto FLAG;
		}
		else {
			cout << "FALSE" << endl;
		}
	}
	else if (int(b) == '%') {
		int c;
		cin >> c;
		if (c != 0) {
			a = a % c;
			goto FLAG;
		}
		else {
			cout << "FALSE" << endl;
		}
	}
	else if (int(b) == '=') {
		cout << "计算结果为:" << a << endl;
	}
	else {
		cout << "FLASE" << endl;
	}
	return 0;
}