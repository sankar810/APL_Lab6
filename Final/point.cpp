#include <iostream>
#include <math.h>
#include "point.h"
using namespace std;

Point::Point() {};

Point::Point(const double xval, const double yval) {
	X = xval;
	Y = yval;
}

Point::~Point() {};


double Point::getX()const {
	return X;
}

double Point::getY()const {
	return Y;
}






