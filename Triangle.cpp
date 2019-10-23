#include "Triangle.h"
#include <cmath>
#include <iostream>
/*
����� Triangle ������������ ����� ����������� �� ��������� � �������� 2 ������������ ����: ����� ��������� � ���� �������� ���������.
����������� ������ , ����������� ������� ������������,  � ������������� ��� ������������.
� �������� ���������� ����� ��������� ������������, � � �������� ��������� ���� ����������� ������� �������� ����� ���� �������������.
*/
using namespace std;

Triangle::Triangle(float Base, float Angle)
{
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
void Triangle::Add(Triangle a)
{
    this->lenBase = this->lenBase + a.lenBase;
    this->angle = (this->angle + a.angle) / 2;
}
float Triangle::S()
{
    if(this->angle == 0)
        return 0;
    float h = this->lenBase / 2 / abs(tan(this->angle / 2));
    return (this->lenBase * h / 2);
}
