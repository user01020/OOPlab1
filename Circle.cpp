#include "Circle.h"
#include <iostream>
#include <cmath>

/*
����� circle ������������ ����� ���������� �� ��������� � �������� 3 ������������ ����: ���������� � ������.
����������� ������ , ����������� ���������� ��  ������ ���������� �� ������ ���������,  � ������������� ��� ����������.
� �������� ���������� ������� ������������, � � �������� ��������� ������ ����������� ������� �������� ��������� ����������.
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
    cout << endl << "������� ���������� ������ ���.(x, y):";
    cin >> x >> y;
    cout << endl << "������� ������ ���:";
    cin >> r;
}

void Circle::Display()
{
    cout << "���������� ������ ����������:"<< endl;
    cout << "x = " << x << " y = " << y << endl;
    cout << "������ r = " << r << endl;
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
