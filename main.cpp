#include <iostream>
#include <locale.h>
#include "Circle.h"
#include "Triangle.h"

/*
����������� ��� ������ � ����� �������� ��� ������ � ��� (�� ������������ ����������� ���, ���������� ������������ ���� �, ������������ Git).

�� ���� ��������� ������ ���� ���������� ����������� ��� ������ � ���������� ����� �������� ��� ������ � ���.
1) ��������� ������������� (Init);
2) ��������� ����� � ���������� (Read);
3) ��������� ������ �� ����� (Display);
4) ��������� �������� (Add), �� ��� ��������� � ������������ �������� ������ ���� ������. ��� ���������� ��� ���������� ���������� � �������� �������;
5) ��������� �� ������ �������� �������.
� main ������������������ ������ � ����������� ������� ����.

���������� ������� 2 � 3 � ����� ��� (������������ Git).

��������� Init, Read, Display, Add � �� ��������, ���������� �������� ������.
���� ���������� ��������� private, ������ � ��� ��� ������������� �������������� ����� �������� ������ public.

*/

/*
����� circle ������������ ����� ���������� �� ��������� � �������� 3 ������������ ����: ���������� � ������.
����������� ������ , ����������� ���������� ��  ������ ���������� �� ������ ���������,  � ������������� ��� ����������.
� �������� ���������� ������� ������������, � � �������� ��������� ������ ����������� ������� �������� ��������� ����������.

����� Triangle ������������ ����� ����������� �� ��������� � �������� 2 ������������ ����: ����� ��������� � ���� �������� ���������.
����������� ������ , ����������� ������� ������������,  � ������������� ��� ������������.
� �������� ���������� ����� ��������� ������������, � � �������� ��������� ���� ����������� ������� �������� ����� ���� �������������.
*/

using namespace std;

int main() {
    setlocale(0, "");

    cout << "\t\tDemonstration class Circle:\n";
    Circle circle1(2, 3, 4), circle2;
    cout << "\tcircle 1:\n";        circle1.Display();
    cout << "\tcircle 2:\n";        circle2.Display();
    cout << "\tinput circle 1:\n";  circle1.Read();
    cout << "\tinput circle 2:\n";  circle2.Read();

    cout << "\tcircle 1:\n";        circle1.Display();
    cout << "\tcircle 2:\n";        circle2.Display();

    cout << "\tcircle1 + circle2:\n";   (circle1 + circle2).Display();
    cout << "\tcircle1 += circle2;\n";  circle1 += circle2;
    cout << "\tcircle1:\n";         circle1.Display();
    float len = circle1.lenToCenterOfCircle();
    cout << "\tcircle1.lenToCenterOfCircle() = " << len << endl;

    cout << "\t\tDemonstration class Triangle:\n";
    Triangle triangle1(4, 60), triangle2;
    cout << "\ttriangle1:\n";       triangle1.Display();
    cout << "\ttriangle2:\n";       triangle2.Display();

    cout << "\tinput triangle1:\n"; triangle1.Read();
    cout << "\tinput triangle2:\n"; triangle2.Read();

    cout << "\ttriangle1:\n";       triangle1.Display();
    cout << "\ttriangle2:\n";       triangle2.Display();

    cout << "\ttriangle1 + triangle2:\n";   (triangle1 + triangle2).Display();
    cout << "\ttriangle1 += triangle2;\n";  triangle1 += triangle2;
    cout << "\ttriangle1:\n";       triangle1.Display();
    float S = triangle1.S();
    cout << "\ttriangle1.S() = " << S << endl;
    return 0;
}
