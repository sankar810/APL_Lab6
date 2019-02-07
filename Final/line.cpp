#include <iostream>
#include <math.h>
#include "line.h"
#include "point.h"
using namespace std;

Line::Line() {
}
Line::~Line() {
}

Line::Line(const double xval1, const double yval1, const double xval2, const double yval2) {
	p1 = Point(xval1, yval1);
	p2 = Point(xval2, yval2);
}

void Line::setLine(const double x1, const double y1, const double x2, const double y2) {
	p1 = Point(x1, y1);
	p2 = Point(x1, y1);
}

double Line::distance() {
	double X1, Y1, X2, Y2;
	X1 = p1.getX(); Y1 = p1.getY(); X2 = p2.getX(); Y2 = p2.getY();
	double distance = sqrt((X2 - X1)*(X2 - X1) + (Y2 - Y1)*(Y2 - Y1));
	return distance;
}

double Line::slope() {
	double X1, Y1, X2, Y2;
	X1 = p1.getX(); Y1 = p1.getY(); X2 = p2.getX(); Y2 = p2.getY();
	double slope = (Y2 - Y1) / (X2 - X1);
	return slope;
}

Point Line::setPoint1(const double x1, const double y1) {
	p1 = Point(x1, y1);
	return p1;
}
Point Line::setPoint2(const double x1, const double y1) {
	p2 = Point(x1, y1);
	return p2;
}

void Line::Print() const
{
	cout << "\nThe line is ((" << X1 << "," << Y1 << ") (" << X2 << "," << Y2 << "))" << endl;
}

istream &operator>>(istream  &input, Line &line)
{
	double X1, Y1, X2, Y2;
	input >> X1 >> Y1 >> X2 >> Y2;
	line.p1 = Point(X1, Y1);
	line.p2 = Point(X2, Y2);
	return input;
}
ostream &operator<<(ostream &output, const Line &line)
{
	double X1, Y1, X2, Y2;
	X1 = line.p1.getX(); Y1 = line.p1.getY(); X2 = line.p2.getX(); Y2 = line.p2.getY();
	output << "\nThe line is ((" << X1 << "," << Y1 << ") (" << X2 << "," << Y2 << "))" << endl;
	return output;
}
bool Line::operator==(const Line& line)
{
	double x1, x2, x3, x4, y1, y2, y3, y4;
	x1 = line.p1.getX(), x2 = line.p2.getX(), x3 = p1.getX(), x4 = p2.getX(); y1 = line.p1.getY(), y2 = line.p2.getY(), y3 = p1.getY(), y4 = p2.getY();
	return ((x1 == x3) && (x2 == x4) && (y1 == y3) && (y2 == y4));
}
bool Line::operator!=(const Line& line)
{
	double x1, x2, x3, x4, y1, y2, y3, y4;
	x1 = line.p1.getX(), x2 = line.p2.getX(), x3 = p1.getX(), x4 = p2.getX(); y1 = line.p1.getY(), y2 = line.p2.getY(), y3 = p1.getY(), y4 = p2.getY();
	return ((x1 != x3) && (x2 != x4) && (y1 != y3) && (y2 != y4));
}