#pragma once
#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED
/*
����� circle ������������ ����� ���������� �� ��������� � �������� 3 ������������ ����: ���������� � ������.
����������� ������ , ����������� ���������� ��  ������ ���������� �� ������ ���������,  � ������������� ��� ����������.
� �������� ���������� ������� ������������, � � �������� ��������� ������ ����������� ������� �������� ��������� ����������.
*/
class Circle{
    private:
        float x = 0, y = 0;
        float r = 0;
    public:
        Circle();
        Circle(float x, float y, float r);
        ~Circle() {};
        void Read();
        void Display();
        Circle operator+(Circle a);
        Circle operator+=(Circle a);
        float lenToCenterOfCircle();
};
#endif CIRCLE_H_INCLUDED
