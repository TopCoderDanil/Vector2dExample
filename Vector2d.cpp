#include <iostream>
#include "Vector2d.h"
using namespace std;
Vector2d::Vector2d(double x, double y)
{
	this->x = x;
	this->y = y;
}
Vector2d::Vector2d(double x0, double x1, double y0, double y1)
{
	this->x = x1 - x0;
	this->y = y1 - y0;
}
Vector2d::Vector2d(const Vector2d& cop)
{
	this->x = cop.x;
	this->y = cop.y;
}
void Vector2d::setx(double x)
{
	this->x = x;
}
double Vector2d::getx()
{
	return this->x;
}
void Vector2d::sety(double)
{
	this->y = y;
}
double Vector2d::gety()
{
	return this->y;
}
void Vector2d::sum(Vector2d b)
{
	x = x + b.x;
	y = y + b.y;
}
void Vector2d::sub(Vector2d b)
{
	x = x - b.x;
	y = y - b.y;
}
void Vector2d::print()
{
	cout << "( " << x << " ; " << y << " )" << endl;
}
double Vector2d::scalarMult(Vector2d b)
{
	return (x * b.x + y * b.y);
}
void Vector2d::multiplication(double b)
{
	x = x * b;
	y = y * b;
}
double Vector2d::length()
{
	return sqrt(pow(x, 2) + pow(y, 2));
}
double Vector2d::tg(Vector2d& b)
{
	double a_length = this->length();
	double b_length = b.length();
	double scalar_a_b = this->scalarMult(b);
	double cos = scalar_a_b / (a_length * b_length);
	double sin = sqrt(1 - cos * cos);
	return sin / cos;
}
Vector2d Vector2d::operator+(const Vector2d& v) const
{
	return Vector2d(x + v.x, y + v.x);
}
Vector2d Vector2d::operator-(const Vector2d& v) const
{
	return Vector2d(x - v.x, y - v.x);
}
double Vector2d::operator*(const Vector2d& v) const
{
	return (x * v.x, y * v.y);
}
Vector2d Vector2d::operator*(const double& v) const
{
	return Vector2d(x * v, y * v);
}
Vector2d& Vector2d::operator++()
{
	x++;
	y++;
	return *this;
}
Vector2d& Vector2d::operator++(int)
{
	Vector2d temp(x, y);
	x++;
	y++;
	return temp;
}
Vector2d& Vector2d::operator--()
{
	x--;
	y--;
	return *this;
}
Vector2d& Vector2d::operator--(int)
{
	Vector2d temp(x, y);
	x--;
	y--;
	return temp;
}
const Vector2d& Vector2d::operator+= (const Vector2d& v)
{
	x += v.x;
	y += v.y;
	return *this;
}
const Vector2d& Vector2d::operator-= (const Vector2d& v)
{
	x -= v.x;
	y -= v.y;
	return *this;
}
const Vector2d& Vector2d::operator*= (const double& v)
{
	x *= v;
	y *= v;
	return *this;
}