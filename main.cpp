#include <stdio.h>
#include <math.h>
#include <locale.h>

typedef struct{
            float x, y;
            float r;
}Circle;

void scanCircle(Circle* a)
{
    printf("\nВведите координаты центра окр.(x, y):");
    scanf("%f%f", &a->x, &a->y);
    printf("\nВведите радиус окр:");
    scanf("%f", &a->r);

}

float lenToCenterOfCircle(Circle a)
{
    return sqrt(a.x * a.x + a.y * a.y);
}


Circle addCircles(Circle a, Circle b)
{
    a.r = a.r + b.r;
    a.x = (a.x + b.x) / 2;
    a.y = (a.y + b.y) / 2;
    return a;
}


int main() {
    setlocale(0, "");
    Circle circle1, circle2;
    float len;
    int var;
    printf("\tВыбирете вариант:\n");

    char exit = 0;
    while(!exit)
    {
        printf("1)Найти растояние от центра окр до начала коорд\n");
        printf("2)Сложить окр(сложение радиусов и средние значения координат аргументов\n");
        printf("3)Выйти из программы\n");
        scanf("%d", &var);
        switch(var){
            case 1: printf("Введите параметры окружности:\n");
                    scanCircle(&circle1);
                    len = lenToCenterOfCircle(circle1);
                    printf("Расстояние = %g\n", len);
                    break;
            case 2: printf("Введите параметры 1ой окружности:\n");
                    scanCircle(&circle1);
                    printf("Введите параметры 2ой окружности:\n");
                    scanCircle(&circle2);
                    circle1 = addCircles(circle1, circle2);
                    printf("Итоговая окр:\nx = %g\ny = %g\nr = %g\n", circle1.x, circle1.y, circle1.r);
                    break;
            default:exit = 1;
        };
    }
    return 0;
}
