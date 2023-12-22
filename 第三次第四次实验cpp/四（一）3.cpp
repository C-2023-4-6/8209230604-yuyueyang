#include<iostream>
using namespace std;
int main() {
	bool school[100] = {false};
	for (int i = 1; i <= 100; i++) {
		for (int a = i - 1; a < 100; a += i) {
			school[a] = !school[a];
		}
	}
	cout << "开着的存物柜号码：";
	for (int b= 0; b < 100; ++b) {
		if (school[b]) {
			cout << b + 1 << " ";
		}
	}
	cout << endl;
	return 0;
}