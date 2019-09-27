#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

class Circle{
    private:
        float x, y;
        float r;
    public:
        Circle(float x, float y, float r)
        {
            this->x = x;
            this->y = y;
            this->r = r;
        }

        ~Circle(){
        }
        void Read()
        {
            cout << endl << "������� ���������� ������ ���.(x, y):";
            cin >> x >> y;
            cout << endl << "������� ������ ���:";
            cin >> r;
        }

        void Display()
        {
            cout << "���������� ������ ����������:"<< endl;
            cout << "x = " << x << " y = " << y << endl;
            cout << "������ r = " << r << endl;
        }

        void Add(Circle a)
        {
            this->r += a.r;
            this->x = (this->x + a.x) / 2;
            this->y = (this->y + a.y) / 2;
        }
        float lenToCenterOfCircle()
        {
            return sqrt(x * x + y * y);
        }

};

int main() {
    setlocale(0, "");
    Circle circle1(0, 0, 0), circle2(0, 0, 0);
    int var;
    char exit = 0;
    while(exit == 0)
    {   cout << "\t������ ���������� � ������������ ������ (x, y) � �������� ��������� r.������ ������� ��� ������ � ������� ���� ������:" << endl;
        cout << "1)Read(���� ������ ������������ � ����������)" << endl;
        cout << "2)Display(����� ������ ������������ �� �����)" << endl;
        cout << "3)Add(�������� ���� �����. ��������� ������ ������)" << endl;
        cout << "4)���������� �� ������ ������� ��������� �� ������ ����������" << endl;
        cout << "5)�����" << endl;
        cin >> var;
        switch(var){
            case 1: circle1.Read();
                    break;
            case 2: circle1.Display();
                    break;
            case 3: cout << "\t������� ������ ������� ������������" << endl;
                    circle2.Read();
                    circle1.Add(circle2);
                    break;
            case 4: cout << "���������� �� ������ ������� ��������� �� ������ ���������� = " << circle1.lenToCenterOfCircle() << endl;
                    break;
            default:exit = 1;
        };
    }
    return 0;
}
