#pragma once
class Vector2d
{
private: // закрытые данные, используются только внутри класса
	double x, y;
public:
	Vector2d(double, double);
	Vector2d(double, double, double, double);
	Vector2d(const Vector2d& cop);
	void setx(double);
	double getx();
	void sety(double);
	double gety();
	void print(void);
	void sum(Vector2d);
	void sub(Vector2d);
	double scalarMult(Vector2d);
	void multiplication(double);
	double length();
	double tg(Vector2d& b);
	Vector2d operator+(const Vector2d& v) const;
	Vector2d operator-(const Vector2d& v) const;
	double operator*(const Vector2d& v) const;
	Vector2d operator*(const double& v) const;
	Vector2d& operator++();
	Vector2d& operator++(int);
	Vector2d& operator--();
	Vector2d& operator--(int);
	const Vector2d& operator += (const Vector2d& v);
	const Vector2d& operator -= (const Vector2d& v);
	const Vector2d& operator *= (const double& v);
};

