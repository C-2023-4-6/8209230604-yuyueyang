#include<iostream>
using namespace std;
int main() {
	char ch;
	cout << "����һ���ַ�:";
	cin >> ch;
	if (ch >= 'a' && ch <= 'z') {
		char uppercase = ch - 'a' + 'A';
		cout << "ת������ַ��ǣ�" << uppercase << endl;
	}
	else if (ch >= 'A' && ch <= 'Z') {
		ch = ch + 1;
		int ascii = static_cast<int>(ch);
		cout <<"�����ַ���ASCII��ֵ:"<<ascii<< endl;
	}
	return 0;
	
}