#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2) {
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
int main() {
    char s1[100];
    char s2[100];

    cout << "�������ַ���s1��";
    cin.getline(s1, 100);

    cout << "�������ַ���s2��";
    cin.getline(s2, 100);

    int result = indexof(s1, s2);

    if (result == -1) {
        cout << "s1����s2���Ӵ���" << endl;
    }
    else {
        cout << "s1��s2���Ӵ�����һ��ƥ����±�Ϊ��" << result << endl;
    }

    return 0;
}