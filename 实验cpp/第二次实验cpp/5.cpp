#include<iostream>
#include<cctype>
using namespace std;
int main() {
	char input;
	int a = 0, b = 0, c = 0, d = 0;
	cout << "您输入的字符为："<< endl;
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
		cout << "英文字母的个数为："<<a<<endl;
		cout << "空格的个数为："<<b<<endl;
		cout << "数字字符的个数为："<<c<<endl;
		cout << "其他字符的个数为："<<d<<endl;
		return 0;

}