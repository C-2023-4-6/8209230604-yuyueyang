#include<iostream>
#include<cctype>
using namespace std;
int main() {
	char input;
	int a = 0, b = 0, c = 0, d = 0;
	cout << "��������ַ�Ϊ��"<< endl;
	while (cin.get(input)&&input!='\n') {
		if (isalpha(input)) {
			a++;
		}
		else if (isspace(input)) {
			b++;
		}
		else if (isdigit(input)) {
			c++;
		}
		else {
			d++;
		}
	}
		cout << "Ӣ����ĸ�ĸ���Ϊ��"<<a<<endl;
		cout << "�ո�ĸ���Ϊ��"<<b<<endl;
		cout << "�����ַ��ĸ���Ϊ��"<<c<<endl;
		cout << "�����ַ��ĸ���Ϊ��"<<d<<endl;
		return 0;

}