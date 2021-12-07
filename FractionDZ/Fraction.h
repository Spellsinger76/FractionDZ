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
    void Add(Fraction fobj);//��������
    void Sub(Fraction fobj);//���������
    void Mul(Fraction fobj);//���������
    void Div(Fraction fobj);//�������
};

