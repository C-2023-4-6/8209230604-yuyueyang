#include<iostream>
using namespace std;
int main() {
	char ch;
	cout << "输入一个字符:";
	cin >> ch;
	if (ch >= 'a' && ch <= 'z') {
		char uppercase = ch - 'a' + 'A';
		cout << "转化后的字符是：" << uppercase << endl;
	}
	else if (ch >= 'A' && ch <= 'Z') {
		ch = ch + 1;
		int ascii = static_cast<int>(ch);
		cout <<"其后继字符的ASCII码值:"<<ascii<< endl;
	}
	return 0;
	
}