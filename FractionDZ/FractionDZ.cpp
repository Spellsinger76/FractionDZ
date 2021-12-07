#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
    setlocale(NULL, "RUS");
    Fraction fobj(2, 3);
    Fraction fobj1(4, 5);

    cout << "Первая дробь = ";
    fobj.Show();
    cout << "\nВторая дробь = ";
    fobj1.Show();

    cout << "\n\nСложение дробей ";
    fobj.Show();
    cout << " и ";
    fobj1.Show();
    cout << "\nРезультат = ";
    fobj.Add(fobj1);
    fobj.Show();

    cout << "\n\nВычитание дробей ";
    fobj.Show();
    cout << " и ";
    fobj1.Show();
    cout << "\nРезультат = ";
    fobj.Sub(fobj1);
    fobj.Show();

    cout << "\n\nУмножение дробей ";
    fobj.Show();
    cout << " и ";
    fobj1.Show();
    cout << "\nРезультат = ";
    fobj.Mul(fobj1);
    fobj.Show();

    cout << "\n\nДеление дробей ";
    fobj.Show();
    cout << " и ";
    fobj1.Show();
    cout << "\nРезультат = ";
    fobj.Div(fobj1);
    fobj.Show();

    //округление вызывается из методе Show и реализовано в привате.
    //также там реализовано и вывод целой части.

    return 0;
}