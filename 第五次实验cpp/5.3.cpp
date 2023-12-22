#include<iostream>
using namespace std;

class squre {
public:
	void S() {
		int arr[3][3];
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cin >> arr[i][j];
			}
		}
			double s1, s2, s3;
			s1 = (arr[0][0] * arr[0][1]) * arr[0][2];
			s2 = (arr[1][0] * arr[1][1]) * arr[1][2];
			s3 = (arr[2][0]* arr[2][1]) * arr[2][2];
			cout << "第一个正方体的体积为：" << s1 << endl;
			cout << "第二个正方体的体积为：" << s2 << endl;
			cout << "第三个正方体的体积为：" << s3 << endl;
	}

	double length;
	double width;
	double height;
};
int main() {
	int s1=0, s2=0, s3=0;
	squre v;
	v.S();
	return 0;
}