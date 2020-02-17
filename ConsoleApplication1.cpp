// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include "Vector2d.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	Vector2d a = { 1, 2 };
	Vector2d b = { 2, 3 };
	cout << "Координаты вектора а "; a.print();
	cout << "Координаты вектора b ";  b.print();
	cout << "Скалярное произведение " << a.scalarMult(b) << endl;
	cout << "Тангенс между двумя векторами " << a.tg(b) << endl;
}