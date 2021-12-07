#pragma once
class Fraction
{
private:
    int numerator;
    int denominator;
    void Round();
public:
    void SetNumerator(int n); 
    int GetNumerator(); 
    void SetDenominator(int d);
    int GetDenominator();
    void Show();
    Fraction();
    Fraction(int numerator, int denominator);
    void Add(Fraction fobj);//сложение
    void Sub(Fraction fobj);//вычитание
    void Mul(Fraction fobj);//умножение
    void Div(Fraction fobj);//деление
};

