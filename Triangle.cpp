#include "Triangle.h"
#include <cmath>
#include <iostream>
/*
 ласс Triangle представл€ет собой треугольник на плоскости и содержит 2 вещественных пол€: длина основани€ и угол напротив основани€.
–еализовать методы , вычисл€ющий площадь треугольника,  и УскладывающийФ две треугольника.
¬ итоговой окружности длины оснований складываютс€, а в качестве итогового угла вычисл€ютс€ средние значени€ углов двух треугольников.
*/
using namespace std;

Triangle::Triangle()
{
    cout << "constructor without par" << endl;
}
Triangle::Triangle(float Base, float Angle)
{
    cout << "constructor with par" << endl;
    lenBase = Base;
    angle = Angle;
}
void Triangle::Read()
{
    cout << "¬ведите длину основани€:";
    cin >> this->lenBase;
    cout << "¬ведите угол напротив основани€:";
    cin >> this->angle;
}
void Triangle::Display()
{
    cout << "ƒлина основани€:" << this->lenBase << endl;
    cout << "”гол напротив основани€:" << this->angle << endl;
}
Triangle Triangle::operator+=(Triangle a)
{
    this->lenBase += a.lenBase;
    this->angle = (this->angle + a.angle) / 2;
    return *this;
}
Triangle Triangle::operator+(Triangle a)
{
    Triangle res = *this;
    return res += a;
}
float Triangle::S()
{
    if(this->angle == 0)
        return 0;
    float h = this->lenBase / 2 / abs(tan(this->angle / 2));
    return (this->lenBase * h / 2);
}
