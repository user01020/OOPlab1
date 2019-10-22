#include <stdio.h>
#include <math.h>
#include <locale.h>

/*
Разработать тип данных и набор процедур для работы с ним (не использовать конструкции ООП, желательно использовать язык С, использовать Git).

Во всех вариантах должен быть разработан комплексный тип данных и реализован набор процедур для работы с ним.
1) Процедура инициализации (Init);
2) Процедура ввода с клавиатуры (Read);
3) Процедура вывода на экран (Display);
4) Процедура сложения (Add), ее два аргумента и возвращаемое значение вашего типа данных. Что понимается под “сложением” поясняется в варианте задания;
5) Процедура по вашему варианту задания.
В main продемонстрировать работу с переменными данного типа.

*/

/*
Класс Triangle представляет собой треугольник на плоскости и содержит 2 вещественных поля: длина основания и угол напротив основания.
Реализовать методы , вычисляющий площадь треугольника,  и “складывающий” две треугольника.
В итоговой окружности длины оснований складываются, а в качестве итогового угла вычисляются средние значения углов двух треугольников.
*/

typedef struct{
           float lenBase, angle;
}Triangle;

Triangle Init(Triangle a, float Base, float Angle)
{
    a.lenBase = Base;
    a.angle = Angle;
    return a;
}

Triangle Read(Triangle a)
{
    printf("Введите длину основания:");
    scanf("%f", &a.lenBase);
    printf("Введите угол напротив основания:");
    scanf("%f", &a.angle);
    return a;
}

void Display(Triangle a)
{
    printf("Длина основания: %g\n", a.lenBase);
    printf("Угол напротив основания: %g\n", a.angle);
}

Triangle Add(Triangle a, Triangle b)
{
    a.lenBase = a.lenBase + b.lenBase;
    a.angle = (a.angle + b.angle) / 2;
    return a;
}

float S(Triangle a)
{
    float h;
    if(a.angle == 0)
        return 0;
    h = a.lenBase / 2 / tan(a.angle / 2);
    return (a.lenBase * h / 2);
}

int main()
{
    setlocale(0, "");
    Triangle triangle1, triangle2;
    triangle1 = Init(triangle1, 0, 0);
    triangle2 = Init(triangle2, 0, 0);
    int exit = 0;
    while(exit == 0)
    {
        printf("\tЗадан треугольник (длина основания, угол напротив основания), Имеются функции для работы с данными треугольника(ов).\n");
        printf("1)Read(Ввод данных треугольника с клавиатуры)\n");
        printf("2)Display(Вывод данных треугольника на экран)\n");
        printf("3)Add(сложение двух треугольников. результат в переменные первого треугольника)\n");
        printf("4)S(площадь треугольника)\n");
        printf("5)Выход\n");
        int var;
        scanf("%d", &var);
        switch(var)
        {
            case 1: triangle1 = Read(triangle1);            break;
            case 2: Display(triangle1);                     break;
            case 3: printf("\tВведите данные второго треугольника\n");
                    triangle2 = Read(triangle2);
                    triangle1 = Add(triangle1, triangle2);  break;
            case 4: printf("S = %g\n", S(triangle1));       break;
            default:exit = 1;
        }
    }
    return 0;
}
