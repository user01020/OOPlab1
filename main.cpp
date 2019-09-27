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
            cout << "Введите длину основания:";
            cin >> this->lenBase;
            cout << "Введите угол напротив основания:";
            cin >> this->angle;
        }
        void Display()
        {
            cout << "Длина основания:" << this->lenBase << endl;
            cout << "Угол напротив основания:" << this->angle << endl;
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
        cout << "\tЗадан треугольник (длина основания, угол напротив основания), Имеются функции для работы с данными треугольника(ов)." << endl;
        cout << "1)Read(Ввод данных треугольника с клавиатуры)" << endl;
        cout << "2)Display(Вывод данных треугольника на экран)" << endl;
        cout << "3)Add(сложение двух треугольников. результат в переменные первого треугольника)" << endl;
        cout << "4)S(площадь треугольника)" << endl;
        cout << "5)Выход" << endl;
        int var;
        cin >> var;
        switch(var)
        {
            case 1: triangle1.Read();               break;
            case 2: triangle1.Display();            break;
            case 3: cout << "\tВведите данные второго треугольника\n";
                    triangle2.Read();
                    triangle1.Add(triangle2);       break;
            case 4: cout << "S = " << triangle1.S() << endl;
                                                    break;
            default:exit = 1;
        }
    }
    return 0;
}
