#include <iostream>
#include <locale.h>
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
����� Triangle ������������ ����� ����������� �� ��������� � �������� 2 ������������ ����: ����� ��������� � ���� �������� ���������.
����������� ������ , ����������� ������� ������������,  � ������������� ��� ������������.
� �������� ���������� ����� ��������� ������������, � � �������� ��������� ���� ����������� ������� �������� ����� ���� �������������.
*/

using namespace std;


int main()
{
    setlocale(0, "");
    /*Triangle triangle1(0, 0), triangle2(0, 0);
    int exit = 0;
    while(exit == 0)
    {
        cout << "\t����� ����������� (����� ���������, ���� �������� ���������), ������� ������� ��� ������ � ������� ������������(��)." << endl;
        cout << "1)Read(���� ������ ������������ � ����������)" << endl;
        cout << "2)Display(����� ������ ������������ �� �����)" << endl;
        cout << "3)Add(�������� ���� �������������. ��������� � ���������� ������� ������������)" << endl;
        cout << "4)S(������� ������������)" << endl;
        cout << "5)�����" << endl;
        int var;
        cin >> var;
        switch(var)
        {
            case 1: triangle1.Read();               break;
            case 2: triangle1.Display();            break;
            case 3: cout << "\t������� ������ ������� ������������\n";
                    triangle2.Read();
                    triangle1.Add(triangle2);       break;
            case 4: cout << "S = " << triangle1.S() << endl;
                                                    break;
            default:exit = 1;
        }
    }*/
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
