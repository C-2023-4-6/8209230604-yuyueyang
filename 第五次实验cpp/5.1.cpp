#include<iostream>
using namespace std;
class Time{
public:
	void INPUT() {
		int h, m, s;
		cin >> h;
		cin >> m;
		cin >> s;
		hour = h;
		minute = m;
		sec = s;
	}
	int TIME() {
		return hour;
	}
	int MINUTE() {
		return minute;
	}
	int SEC() {
		return sec;
	}
private:             
	int hour;
	int minute;
	int sec;
};
int main(){
	Time t1;
	t1.INPUT();
	t1.TIME();
	cout << t1.TIME() << ":" << t1.MINUTE() << ":" << t1.SEC() << endl;
	return 0;
}