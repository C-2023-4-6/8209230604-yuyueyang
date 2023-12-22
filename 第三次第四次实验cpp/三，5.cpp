#include<iostream>
using namespace std;
int add() {
	int i = 1;
	for (int a = 1; a < 10; a++) {
		i = i + 1;
		i = 2 * i;
	}
	return i;
}
int main() {
	int sum = add();
	cout <<"第一天小猴子摘了桃子"<< sum<<"个" << endl;
	system("pause");
	return 0;
}