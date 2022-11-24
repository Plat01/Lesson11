#include "Fraction.h"
#include <iostream>
#include <exception>

int GCD(int a, int b);

Fraction::Fraction(int n, int d)
{
	if (d == 0)
	{
		throw std::exception();
	}
	this->num = n;
	this->den = d;
}

Fraction::~Fraction()
{
	std::cout << "fraction deleted:" << "\n";
}

void Fraction::setNum(int n)
{
	this->num = n;
}

int Fraction::getNum()
{
	return this->num;
}

void Fraction::setDen(int d)
{
	if (d == 0)
	{
		throw std::exception();
	}
	this->den = d;
}

int Fraction::getDen()
{
	return this->den;
}

Fraction Fraction::mult(Fraction* other)
{
	int n = this->num * other->getNum();
	int d = this->den * other->getDen();
	return Fraction(n, d);
}

Fraction Fraction::operator*(Fraction other)
{
	int n = this->num * other.getNum();
	int d = this->den * other.getDen();
	return Fraction(n, d);
}
