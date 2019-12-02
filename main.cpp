#include <iostream>
#include <locale.h>
#include "Circle.h"
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
Класс circle представляет собой окружность на плоскости и содержит 3 вещественных поля: координаты и радиус.
Реализовать методы , вычисляющий расстояние от  центра окружности до начала координат,  и “складывающий” две окружности.
В итоговой окружности радиусы складываются, а в качестве координат центра вычисляются средние значения координат аргументов.

Класс Triangle представляет собой треугольник на плоскости и содержит 2 вещественных поля: длина основания и угол напротив основания.
Реализовать методы , вычисляющий площадь треугольника,  и “складывающий” две треугольника.
В итоговой окружности длины оснований складываются, а в качестве итогового угла вычисляются средние значения углов двух треугольников.
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
