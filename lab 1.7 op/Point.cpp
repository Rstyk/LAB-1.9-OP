#include "Point.h"

bool Point::init(double a, double b)
{
	setX(a);
	setY(b);
	return true;
}

string Point::toString()
{
	stringstream sout;
	sout << x << y;
	return sout.str();
}

void Point::read()
{
	int a, b;
	do {
		cout << "x =  "; cin >> a;
		cout << "y =  "; cin >> b;
	} while (!init(a, b));
}

void Point::display() const
{

	cout << endl;
	cout << "x = " << getX() << endl;
	cout << "y = " << getY() << endl;
	cout << endl;
}

double Point::distanceToOrigin() const
{
	double result = sqrt(x * x + y * y);
	return result;
}
void Point::polarizeCoords()
{
	double dist = distanceToOrigin();
	double angle = acos(1.0 * x / dist);
	setX(dist);
	setY(angle);
}
double distanceOfPoints(Point p1, Point p2)
{
	double x1 = p1.getX();
	double y1 = p1.getY();
	double x2 = p2.getX();
	double y2 = p2.getY();

	double dx = x1 - x2;
	double dy = y1 - y2;
	double result = sqrt(dx * dx + dy * dy);
	return result;
}

bool equalityPoints(Point p1, Point p2)
{
	if (p1.getX() == p2.getX() && p1.getY() == p2.getY())
		return true;
	else
		return false;
}
