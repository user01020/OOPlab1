#include <stdio.h>
#include <math.h>
#include <locale.h>

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
