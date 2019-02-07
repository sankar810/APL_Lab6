#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;

class Point
{
private:
	double X;
	double Y;
public:
	Point();
	Point(const double, const double);
	~Point();
	double getX()const;
	double getY()const;
};
#endif
