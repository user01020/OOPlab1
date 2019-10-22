#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

class Circle{
    private:
        float x, y;
        float r;
    public:
        Circle()
        {
            x = 0;
            y = 0;
            r = 0;
        }

        ~Circle(){
        }
        void scan()
        {
            cout << endl << "������� ���������� ������ ���.(x, y):";
            cin >> x >> y;
            cout << endl << "������� ������ ���:";
            cin >> r;
        }

        void print()
        {
            cout << "�������� ���:" << endl;
            cout << "x = " << x << endl;
            cout << "y = " << y << endl;
            cout << "r = " << r << endl;
        }

        float lenToCenterOfCircle()
        {
            return sqrt(x * x + y * y);
        }

        void addCircles(Circle a)
        {
            r = r + a.r;
            x = (x + a.x) / 2;
            y = (y + a.y) / 2;
        }

};

int main() {
    setlocale(0, "");
    cout << "\t�������� �������:\n";
    Circle circle1, circle2;
    float len;
    int var;
    char exit = 0;
    while(!exit)
    {
        cout << "1)����� ��������� �� ������ ��� �������� �����\n";
        cout << "2)������� ���(�������� �������� � ������� �������� ��������� ����������\n";
        cout << "3)����� �� ���������\n";
        cin >> var;
        switch(var){
            case 1: cout << "������� ��������� ����������:" << endl;
                    circle1.scan();
                    len = circle1.lenToCenterOfCircle();
                    cout << "���������� = " << len << endl;
                    break;
            case 2: cout << "������� ��������� 1�� ����������:" << endl;
                    circle1.scan();
                    cout << "������� ��������� 2�� ����������:" << endl;
                    circle2.scan();
                    circle1.addCircles(circle2);
                    circle1.print();
                    break;
            default:exit = 1;
        };
    }
    return 0;
}
