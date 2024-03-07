#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Point
{
private:
	double x, y;
public:
	double getX() const { return x; }
	void setX(double value) { x = value; }
	double getY() const { return y; }
	void setY(double value) { y = value; }

	bool init(double a, double b);
	string toString();
	void read();
	void display() const;

	double distanceToOrigin() const;
	void moveX(double value) { setX(x + value); }
	void moveY(double value) { setY(y + value); }
	void polarizeCoords();

	friend double distanceOfPoints(Point p1, Point p2);
	friend bool equalityPoints(Point p1, Point p2);
};
