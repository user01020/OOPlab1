#include "Circle.h"
#include <iostream>
#include <cmath>

/*
Класс circle представляет собой окружность на плоскости и содержит 3 вещественных поля: координаты и радиус.
Реализовать методы , вычисляющий расстояние от  центра окружности до начала координат,  и “складывающий” две окружности.
В итоговой окружности радиусы складываются, а в качестве координат центра вычисляются средние значения координат аргументов.
*/
using namespace std;

Circle::Circle(float x, float y, float r)
        {
            this->x = x;
            this->y = y;
            this->r = r;
        }
void Circle::Read()
{
    cout << endl << "Введите координаты центра окр.(x, y):";
    cin >> x >> y;
    cout << endl << "Введите радиус окр:";
    cin >> r;
}

void Circle::Display()
{
    cout << "Координаты центра окружности:"<< endl;
    cout << "x = " << x << " y = " << y << endl;
    cout << "Радиус r = " << r << endl;
}

void Circle::Add(Circle a)
{
    this->r += a.r;
    this->x = (this->x + a.x) / 2;
    this->y = (this->y + a.y) / 2;
}
float Circle::lenToCenterOfCircle()
{
    return sqrt(x * x + y * y);
}
