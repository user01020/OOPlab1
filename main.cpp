#include <stdio.h>
#include <math.h>
#include <locale.h>

typedef struct{
           float lenBase, angle;
}Triangle;

void Init(Triangle a)
{
    a.lenBase = 0;
    a.angle = 0;
}

void Read(Triangle* a)
{
    printf("������� ����� ���������:");
    scanf("%f", &a->lenBase);
    printf("������� ���� �������� ���������:");
    scanf("%f", &a->angle);
}

void Display(Triangle a)
{
    printf("����� ���������: %g\n", a.lenBase);
    printf("���� �������� ���������: %g\n", a.angle);
}

Triangle Add(Triangle a, Triangle b)
{
    a.lenBase = a.lenBase + b.lenBase;
    a.angle = (a.angle + b.angle) / 2;
    return a;
}

float S(Triangle a)
{
    float h = a.lenBase / 2 / tan(a.angle / 2);
    return a.lenBase * h / 2;
}

int main()
{
    setlocale(0, "");
    Triangle triangle1, triangle2;
    Init(triangle1);
    Init(triangle2);
    int exit = 0;
    while(exit == 0)
    {
        printf("\t����� ����������� (����� ���������, ���� �������� ���������), ������� ������� ��� ������ � ������� ������������(��).\n");
        printf("1)Read(���� ������ ������������ � ����������)\n");
        printf("2)Display(����� ������ ������������ �� �����)\n");
        printf("3)Add(�������� ���� �������������)\n");
        printf("4)S(������� ������������)\n");
        printf("5)�����\n");
        int var;
        scanf("%d", &var);
        switch(var)
        {
            case 1: Read(&triangle1);                       break;
            case 2: Display(triangle1);                     break;
            case 3: Read(&triangle2);
                    triangle1 = Add(triangle1, triangle2);  break;
            case 4: printf("S = %f\n", S(triangle1));       break;
            default:exit = 1;
        }
    }
    return 0;
}
