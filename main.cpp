#include <iostream>
#include <locale.h>
#include "Triangle.h"

/*
Разработать тип данных и набор процедур для работы с ним (не использовать конструкции ООП, желательно использовать язык С, использовать Git).

Во всех вариантах должен быть разработан комплексный тип данных и реализован набор процедур для работы с ним.
1) Процедура инициализации (Init);
2) Процедура ввода с клавиатуры (Read);
3) Процедура вывода на экран (Display);
4) Процедура сложения (Add), ее два аргумента и возвращаемое значение вашего типа данных. Что понимается под “сложением” поясняется в варианте задания;
5) Процедура по вашему варианту задания.
В main продемонстрировать работу с переменными данного типа.

Переделать задание 2 и 3 в стиле ООП (Использовать Git).

Процедуры Init, Read, Display, Add и по варианту, становятся методами класса.
Поля становятся закрытыми private, доступ к ним при необходимости осуществляется через открытые методы public.

*/

/*
Класс Triangle представляет собой треугольник на плоскости и содержит 2 вещественных поля: длина основания и угол напротив основания.
Реализовать методы , вычисляющий площадь треугольника,  и “складывающий” две треугольника.
В итоговой окружности длины оснований складываются, а в качестве итогового угла вычисляются средние значения углов двух треугольников.
*/

using namespace std;


int main()
{
    setlocale(0, "");
    /*Triangle triangle1(0, 0), triangle2(0, 0);
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
