#include"mytriangle.h"

double is_area(double side1, double side2, double side3) {
	double s = (side1 + side2 + side3) / 2;
	double squre = sqrt(s*(s - side1)*(s - side2)*(s - side3));
	return squre;
}