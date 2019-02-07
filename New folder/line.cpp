#include <iostream>
#include <math.h>
#include "line.h"
#include "point.h"
using namespace std;

Line::Line() {};

void Line::setLine(const double xval1, const double yval1, const double xval2, const double yval2) {
	X1 = xval1;
	Y1 = yval1;
	X2 = xval2;
	Y2 = yval2;
}

double Line::distance() {
	double distance = sqrt((X2 - X1)*(X2 - X1) + (Y2 - Y1)*(Y2 - Y1));
	return distance;
}

double Line::slope() {
	double slope = (Y2 - Y1) / (X2 - X1);
	return slope;
}

void Line::Print() const
{
	cout << "\nThe line is ((" << X1 << "," << Y1 << ") (" << X2 << "," << Y2 << "))" << endl;
}

Point Point::istream &operator>>(istream  &input, Point &Point) 
{
	input >> Point.X >> Point.Y;
	return input;
}
Point Point::ostream &operator<<(ostream &output, const Point &Point) 
{
	output << "\nPoint is:(" << Point.X << "," << Point.Y << ")";
	return output;
}
Point Point::operator==(const Point& Point) 
{
	 return(X == Point.X && Y == Point.Y); 
}
Point Point::operator!=(const Point& Point) 
{
	 return(X != Point.X && Y != Point.Y);
}