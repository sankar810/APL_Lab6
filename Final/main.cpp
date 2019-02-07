#include <iostream>
#include "line.h"
#include "point.h"
using namespace std;

int main()
{
	Line line1, line2;
	double distance, slope;

	cout << "Enter line 1 points 'P1' 'P2':" << endl;
	cin >> line1;
	cout << "Enter line 2 points 'P3' 'P4':" << endl;
	cin >> line2;
	cout << "Line 1 points:" << line1 << endl;
	cout << "Line 2 points:" << line2 << endl;


	distance = line1.distance();
	cout << "\nThe distance of first line is: " << distance << endl;

	slope = line1.slope();
	cout << "\nSlope of the first line is: " << slope << endl;

	distance = line2.distance();
	cout << "\nThe distance of second line is: " << distance << endl;

	slope = line2.slope();
	cout << "\nSlope of the second line is: " << slope << endl;

	if (line1 == line2)
	{
		cout << "Lines are Equal" << endl;

	}
	if (line1 != line2)
	{
		cout << "Lines are not Equal" << endl;
	}
	return 0;
	//cin.get();
	getchar();
}