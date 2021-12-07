#include<iostream>
#include "Fraction.h"


void Fraction::Round()
{
    int temp = numerator % denominator;
    for (int i = 2; i <= temp / 2; i++)
    {
        if (numerator % i == 0 && denominator % i == 0)
        {
            numerator /= i;
            denominator /= i;
            i = 1;
            temp= numerator % denominator;
        }
    }
}

void Fraction::SetNumerator(int n)
{
    numerator = n;
}
int Fraction::GetNumerator()
{
    return numerator;
}
void Fraction::SetDenominator(int d)
{
    if (d != 0)
        denominator = d;
}
int Fraction::GetDenominator()
{
    return denominator;
}
void Fraction::Show()
{
    Fraction::Round();
    if (denominator>numerator)
        std::cout << "[" << numerator << "/" << denominator << "]";
    if (denominator < numerator && numerator%denominator!=0)
        std::cout<<numerator/denominator << "[" << numerator%denominator << "/" << denominator << "]";
    if (numerator % denominator == 0)
        std::cout << numerator / denominator;
}
Fraction::Fraction()
{
    numerator = 0;
    denominator = 1;
}
Fraction::Fraction(int numerator, int denominator) :numerator{ numerator }
{
    if (denominator != 0)
        this->denominator = denominator;
}

void Fraction::Add(Fraction fobj)
{
    this->numerator = this->numerator * fobj.GetDenominator() + fobj.GetNumerator() * this->denominator;
    this->denominator = this->denominator * fobj.GetDenominator();
}

void Fraction::Sub(Fraction fobj)
{
    this->numerator = this->numerator * fobj.GetDenominator() - fobj.GetNumerator() * this->denominator;
    this->denominator = this->denominator * fobj.GetDenominator();
}

void Fraction::Mul(Fraction fobj)
{
    this->numerator = this->numerator * fobj.GetNumerator();
    this->denominator = this->denominator * fobj.GetDenominator();
}

void Fraction::Div(Fraction fobj)
{
    this->numerator = this->numerator * fobj.GetDenominator();
    this->denominator = this->denominator * fobj.GetNumerator();
}
