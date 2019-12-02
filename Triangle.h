#pragma once
#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED
/*
 ласс Triangle представл€ет собой треугольник на плоскости и содержит 2 вещественных пол€: длина основани€ и угол напротив основани€.
–еализовать методы , вычисл€ющий площадь треугольника,  и УскладывающийФ две треугольника.
¬ итоговой окружности длины оснований складываютс€, а в качестве итогового угла вычисл€ютс€ средние значени€ углов двух треугольников.
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
