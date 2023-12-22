#include <iostream>
using namespace std;
#include"student.h"
void Student::set_value(int n, const char* nm, char s) {
    num = n;
    int i = 0;
    while (nm[i] != '\0') {
        name[i] = nm[i];
        i++;
    }
    name[i] = '\0';
    sex = s;
}
void Student::display()         
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}
