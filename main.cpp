#include <stdio.h>
#include <math.h>
#include <locale.h>

#include <iostream>

using namespace std;

class Triangle{
    private:
        float lenBase;
        float angle;
    public:
        Triangle(float Base, float Angle)
        {
            lenBase = Base;
            angle = Angle;
        }
        ~Triangle(){}
        void Read()
        {
            cout << "������� ����� ���������:";
            cin >> this->lenBase;
            cout << "������� ���� �������� ���������:";
            cin >> this->angle;
        }
        void Display()
        {
            cout << "����� ���������:" << this->lenBase << endl;
            cout << "���� �������� ���������:" << this->angle << endl;
        }
        void Add(Triangle a)
        {
            this->lenBase = this->lenBase + a.lenBase;
            this->angle = (this->angle + a.angle) / 2;
        }
        float S()
        {
            float h = this->lenBase / 2 / tan(this->angle / 2);
            return (this->lenBase * h / 2);
        }
};

int main()
{
    setlocale(0, "");
    Triangle triangle1(0, 0), triangle2(0, 0);
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
    }
    return 0;
}
