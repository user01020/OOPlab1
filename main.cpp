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
            cout << endl << "Введите координаты центра окр.(x, y):";
            cin >> x >> y;
            cout << endl << "Введите радиус окр:";
            cin >> r;
        }

        void print()
        {
            cout << "Итоговая окр:" << endl;
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
    cout << "\tВыбирете вариант:\n";
    Circle circle1, circle2;
    float len;
    int var;
    char exit = 0;
    while(!exit)
    {
        cout << "1)Найти растояние от центра окр доначала коорд\n";
        cout << "2)Сложить окр(сложение радиусов и средние значения координат аргументов\n";
        cout << "3)Выйти из программы\n";
        cin >> var;
        switch(var){
            case 1: cout << "Введите параметры окружности:" << endl;
                    circle1.scan();
                    len = circle1.lenToCenterOfCircle();
                    cout << "Расстояние = " << len << endl;
                    break;
            case 2: cout << "Введите параметры 1ой окружности:" << endl;
                    circle1.scan();
                    cout << "Введите параметры 2ой окружности:" << endl;
                    circle2.scan();
                    circle1.addCircles(circle2);
                    circle1.print();
                    break;
            default:exit = 1;
        };
    }
    return 0;
}
