#pragma once
#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED
/*
����� Triangle ������������ ����� ����������� �� ��������� � �������� 2 ������������ ����: ����� ��������� � ���� �������� ���������.
����������� ������ , ����������� ������� ������������,  � ������������� ��� ������������.
� �������� ���������� ����� ��������� ������������, � � �������� ��������� ���� ����������� ������� �������� ����� ���� �������������.
*/
class Triangle{
    private:
        float lenBase = 0;
        float angle = 0;
    public:
        Triangle();
        Triangle(float Base, float Angle);
        ~Triangle(){};
        void Read();
        void Display();
        void Add(Triangle a);
        Triangle operator+(Triangle a);
        Triangle operator+=(Triangle a);
        float S();
};
#endif  TRIANGLE_H_INCLUDED
