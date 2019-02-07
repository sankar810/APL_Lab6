#ifndef LINE_H
#define LINE_H
#include <iostream>
#include "point.h"

using namespace std;

class Line
{
private:
	Point p1, p2;
	double X1, X2, Y1, Y2;
public:
	Line();
	~Line();
	Line(const double, const double, const double, const double);
	void Print() const;

	Point setPoint1(const double, const double);
	Point setPoint2(const double, const double);
	void setLine(const double, const double, const double, const double);

	double distance();
	double slope();

	friend istream &operator>>(istream &in, Line &line);
	friend ostream &operator<<(ostream &os, const Line &line);
	bool operator==(const Line&);
	bool operator!=(const Line&);
};
#endif