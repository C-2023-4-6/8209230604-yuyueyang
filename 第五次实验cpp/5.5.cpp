#include <iostream>
using namespace std;

class Point {

public:
    Point(int X, int Y) {
        x = X;
        y = Y;
    }
    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }
    void display() {
        cout << "修改后的坐标为: (" << x << ", " << y << ")" << endl;
    }
private:
    int x;
    int y;
};

int main() {
    Point point(60, 80);
    int a, b;
    cin >> a;
    cin >> b;
    point.setPoint(a, b);
    point.display();

    return 0;
}