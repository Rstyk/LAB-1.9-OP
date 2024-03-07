#include "Triangle.h"

void Triangle::displayTriangle() const
{
	cout << endl;
	cout << "First point P1 (A)" << endl;
	P1.display();
	cout << "Second point P2 (B)" << endl;
	P2.display();
	cout << "Third point P3 (C)" << endl;
	P3.display();
	cout << "P1P2 (AB) = " << get_a() << endl;
	cout << "P2P3 (BC) = " << get_b() << endl;
	cout << "P1P3 (AC) = " << get_c() << endl;
	cout << endl;

}

void Triangle::readTriangle()
{

	cout << "First point P1 (A)" << endl;
	P1.read();
	cout << "Second point P2 (B)" << endl;
	P2.read();
	cout << "Third point P3 (C)" << endl;
	P3.read();
}

void Triangle::init(double x1, double y1, double x2, double y2, double x3, double y3)
{
	setP1(x1, y1);
	setP2(x2, y2);
	setP3(x3, y3);
}

double Triangle::get_A()  const
{
	double angle;
	double a, b, c;
	double cosA;

	a = get_a();
	b = get_b();
	c = get_c();

	double n = a * a + c * c - b * b;
	double m = 2 * a * c;

	cosA = (1.0 * n) / (1.0 * m);
	angle = acos(cosA);

	return angle;
}

double Triangle::get_B()  const
{
	double angle;
	double a, b, c;
	double cosA;

	a = get_a();
	b = get_b();
	c = get_c();

	double n = a * a + b * b - c * c;
	double m = 2 * a * b;

	cosA = (1.0 * n) / (1.0 * m);
	angle = acos(cosA);

	return angle;
}

double Triangle::get_C() const
{
	double angle;
	double a, b, c;
	double cosA;

	a = get_a();
	b = get_b();
	c = get_c();

	double n = b * b + c * c - a * a;
	double m = 2 * b * c;

	cosA = (1.0 * n) / (1.0 * m);
	angle = acos(cosA);

	return angle;
}

double Triangle::hA() const
{
	double BC = get_b();
	double S = square();

	double result = 2.0 * S / BC;
	return result;
}
double Triangle::hB() const
{
	double AC = get_c();
	double S = square();

	double result = 2.0 * S / AC;
	return result;
}
double Triangle::hC() const
{
	double AB = get_a();
	double S = square();

	double result = 2.0 * S / AB;
	return result;
}

double Triangle::perimeter() const
{
	double res;
	res = get_a() + get_b() + get_c();
	return res;
}

string Triangle::triangleType() const {
	string result;
	double a, b, c;
	a = get_a();
	b = get_b();
	c = get_c();

	double angle_a, angle_b, angle_c;
	angle_a = get_A();
	angle_b = get_B();
	angle_c = get_C();

	if (a == b && b == c)
		result = "Equilateral triangle";
	else if (a == b || a == c || b == c) {
		if (sin(angle_a) == 1.0 || sin(angle_b) == 1.0 || sin(angle_c) == 1.0)
			result = "Right-angled isosceles triangle";
		else
			result = "Isosceles triangle";
	}
	else if (sin(angle_a) == 1.0 || sin(angle_b) == 1.0 || sin(angle_c) == 1.0)
		result = "Right-angled triangle";
	else
		result = "Scalene triangle ";

	return result;
}

double Triangle::square() const
{
	double halfPerimeter = 1.0 * perimeter() / 2.0;
	double a, b, c;
	a = get_a();
	b = get_b();
	c = get_c();

	double result;
	result = sqrt(halfPerimeter * (halfPerimeter - a) * (halfPerimeter - b) * (halfPerimeter - c));

	return result;
}
