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
            cout << endl << "Введите координаты центра окр.(x, y):";
            cin >> x >> y;
            cout << endl << "Введите радиус окр:";
            cin >> r;
        }

        void Display()
        {
            cout << "Координаты центра окружности:"<< endl;
            cout << "x = " << x << " y = " << y << endl;
            cout << "Радиус r = " << r << endl;
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
    {   cout << "\tЗадана окружность с координатами центра (x, y) и радиусом основания r.Имются функции для работы с данными этой фигуры:" << endl;
        cout << "1)Read(Ввод данных треугольника с клавиатуры)" << endl;
        cout << "2)Display(Вывод данных треугольника на экран)" << endl;
        cout << "3)Add(сложение двух фигур. результат первая фигура)" << endl;
        cout << "4)Расстояние от начала системы координат до центра окружности" << endl;
        cout << "5)Выход" << endl;
        cin >> var;
        switch(var){
            case 1: circle1.Read();
                    break;
            case 2: circle1.Display();
                    break;
            case 3: cout << "\tВведите данные второго треугольника" << endl;
                    circle2.Read();
                    circle1.Add(circle2);
                    break;
            case 4: cout << "Расстояние от начала системы координат до центра окружности = " << circle1.lenToCenterOfCircle() << endl;
                    break;
            default:exit = 1;
        };
    }
    return 0;
}
