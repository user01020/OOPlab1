#pragma once
#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED
/*
 ласс circle представл€ет собой окружность на плоскости и содержит 3 вещественных пол€: координаты и радиус.
–еализовать методы , вычисл€ющий рассто€ние от  центра окружности до начала координат,  и УскладывающийФ две окружности.
¬ итоговой окружности радиусы складываютс€, а в качестве координат центра вычисл€ютс€ средние значени€ координат аргументов.
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
