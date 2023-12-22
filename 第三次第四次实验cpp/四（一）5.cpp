#include<iostream>
#include<string>
using namespace std;
int indexOf(const char s1[], const char s2[]);
int main() {
	const int length = 100;
	char s1[length];
	char s2[length];
	cout << "enter the first string:";
	cin.getline(s1, length);
	cout << "enter the second string:";
	cin.getline(s2, length);
	int index = indexOf(s1, s2);
	if (index != -1) {
		cout << "indexOf(" << s1 << "," << s2 << ")is" << index << endl;
	}
	else {
		cout << "indexOf(" << s1 << "," << s2 << ")is" << index << endl;
	}
	return 0;
}
int indexOf(const char s1[], const char s2[]) {
	int length1 = 0;
	int length2 = 0;
	while (s1[length1] != '\0') {
		length1++;
	}
	while (s2[length2] != '\0') {
		length2++;
	}
	for (int i = 0; i <= length2 - length1; i++) {
		int j;
		for (j = 0; j < length1; j++) {
			if (s2[i + j] != s1[j]) {
				break;
			}
		}
		if (j == length1) {
			return i;
		}
	}
	return -1;
}