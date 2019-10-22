#include <stdio.h>
#include <math.h>
#include <locale.h>

typedef struct{
            float x, y;
            float r;
}Circle;

void scanCircle(Circle* a)
{
    printf("\n������� ���������� ������ ���.(x, y):");
    scanf("%f%f", &a->x, &a->y);
    printf("\n������� ������ ���:");
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
    printf("\t�������� �������:\n");

    char exit = 0;
    while(!exit)
    {
        printf("1)����� ��������� �� ������ ��� �� ������ �����\n");
        printf("2)������� ���(�������� �������� � ������� �������� ��������� ����������\n");
        printf("3)����� �� ���������\n");
        scanf("%d", &var);
        switch(var){
            case 1: printf("������� ��������� ����������:\n");
                    scanCircle(&circle1);
                    len = lenToCenterOfCircle(circle1);
                    printf("���������� = %g\n", len);
                    break;
            case 2: printf("������� ��������� 1�� ����������:\n");
                    scanCircle(&circle1);
                    printf("������� ��������� 2�� ����������:\n");
                    scanCircle(&circle2);
                    circle1 = addCircles(circle1, circle2);
                    printf("�������� ���:\nx = %g\ny = %g\nr = %g\n", circle1.x, circle1.y, circle1.r);
                    break;
            default:exit = 1;
        };
    }
    return 0;
}
