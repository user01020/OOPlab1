#include <stdio.h>
#include <math.h>
#include <locale.h>

typedef struct{
            float x, y;
            float r;
}Circle;

Circle Init(Circle a, float x, float y, float r)
{
    a.x = x;
    a.y = y;
    a.r = r;
    return a;
}

Circle Read(Circle a)
{
    printf("\n������� ���������� ������ ���.(x, y):");
    scanf("%f%f", &a.x, &a.y);
    printf("\n������� ������ ���:");
    scanf("%f", &a.r);
    return a;
}

void Display(Circle a)
{
    printf("���������� ������ ���:\nx = %g, y = %g\n", a.x, a.y);
    printf("������ ���������� r = %g\n", a.r);
}

Circle Add(Circle a, Circle b)
{
    a.r = a.r + b.r;
    a.x = (a.x + b.x) / 2;
    a.y = (a.y + b.y) / 2;
    return a;
}
float lenToCenterOfCircle(Circle a)
{
    return sqrt(a.x * a.x + a.y * a.y);
}

int main() {
    setlocale(0, "");
    Circle circle1, circle2;
    circle1 = Init(circle1, 0, 0, 0);
    circle2 = Init(circle2, 0, 0, 0);
    int var;
    char exit = 0;
    while(exit == 0)
    {
        printf("\t������ ���������� � ������������ ������ (x, y) � �������� r. ������� ������� ��� ������ � ������� ���� ������:\n");
        printf("1)Read(���� ������ ������ � ����������)\n");
        printf("2)Display(����� ������ ������ �� �����)\n");
        printf("3)Add(�������� ���� �����. ��������� ������ ������)\n");
        printf("4)��������� �� ������ ��������� �� ������ ����������.\n");
        printf("5)�����\n");
        scanf("%d", &var);
        switch(var){
            case 1: circle1 = Read(circle1);
                    break;
            case 2: Display(circle1);
                    break;
            case 3: printf("\t������� ������ ������ ������\n");
                    circle2 = Read(circle2);
                    circle1 = Add(circle1, circle2);
                    break;
            case 4: printf("��������� �� ������ ��������� �� ������ ���������� = %f\n", lenToCenterOfCircle(circle1));
                    break;
            default:exit = 1;
        };
    }
    return 0;
}
