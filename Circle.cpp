#include "Circle.h"
#include <iostream>
#include <cmath>

/*
����� circle ������������ ����� ���������� �� ��������� � �������� 3 ������������ ����: ���������� � ������.
����������� ������ , ����������� ���������� ��  ������ ���������� �� ������ ���������,  � ������������� ��� ����������.
� �������� ���������� ������� ������������, � � �������� ��������� ������ ����������� ������� �������� ��������� ����������.
*/
using namespace std;

Circle::Circle()
{
    cout << "constructor without par" << endl;
}
Circle::Circle(float x, float y, float r)
        {
            cout << "constructor with par" << endl;
            this->x = x;
            this->y = y;
            this->r = r;
        }
void Circle::Read()
{
    cout << "������� ���������� ������ ���.(x, y):";
    cin >> x >> y;
    cout << "������� ������ ���:";
    cin >> r;
}

void Circle::Display()
{
    cout << "���������� ������ ����������:"<< endl;
    cout << "x = " << x << " y = " << y << endl;
    cout << "������ r = " << r << endl;
}
Circle Circle::operator+=(Circle a)
{
    this->x = (this->x + a.x) / 2;
    this->y = (this->y + a.y) / 2;
    this->r += a.r;
    return *this;
}

Circle Circle::operator+(Circle a)
{
    Circle res = *this;
    return res += a;
}

float Circle::lenToCenterOfCircle()
{
    return sqrt(x * x + y * y);
}
