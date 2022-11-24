
#pragma once

class Fraction
{
public:
	Fraction(int n, int d); // конструктор
	~Fraction(); // деструктор

	void setNum(int d);
	int getNum();
	void setDen(int d);
	int getDen();
	Fraction mult(Fraction* other);
	Fraction operator*(Fraction other);
	Fraction operator/(Fraction other);
	Fraction operator+(Fraction other);
	Fraction operator-(Fraction other);

private:
	int num;
	int den;

};

