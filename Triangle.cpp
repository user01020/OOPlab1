#include "Triangle.h"
#include <cmath>
#include <iostream>
/*
����� Triangle ������������ ����� ����������� �� ��������� � �������� 2 ������������ ����: ����� ��������� � ���� �������� ���������.
����������� ������ , ����������� ������� ������������,  � ������������� ��� ������������.
� �������� ���������� ����� ��������� ������������, � � �������� ��������� ���� ����������� ������� �������� ����� ���� �������������.
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
    cout << "������� ����� ���������:";
    cin >> this->lenBase;
    cout << "������� ���� �������� ���������:";
    cin >> this->angle;
}
void Triangle::Display()
{
    cout << "����� ���������:" << this->lenBase << endl;
    cout << "���� �������� ���������:" << this->angle << endl;
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
