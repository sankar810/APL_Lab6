#include <iostream>
#include <math.h>
#include "point.h"
using namespace std;

Point::Point() {};

Point::Point(const Point &Point) {
	X = Point.X;
	Y = Point.Y;
}

Point::~Point() {};

void Point::setPoint(const double xval, const double yval) {
	X = xval;
	Y = yval;
}

double Point::getX() const {
	return X;
}

double Point::getY() const {
	return Y;
}






