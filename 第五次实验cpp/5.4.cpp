#include <iostream>
using namespace std;
class Student {
public:
	int id; 
	int score; 
};
void max(Student* students, int a) {
	Student* maxS = &students[0];
	for (int i = 1; i < a; i++) {
		if (students[i].score > maxS->score) {
			maxS = &students[i];
		}
	}
	cout << "最高分的学生学号为：" << maxS->id << endl;
}

int main() {
	Student students[5] = {
		{1, 85},
		{2, 92},
		{3, 78},
		{4, 88},
		{5, 90}
	};
	max(students, 5);

	return 0;
}