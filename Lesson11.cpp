// Lesson11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Fraction.h"

int main()
{
	int a = 5;

	Fraction f1(3, 5);
	Fraction f2(2, 4);
	/*Fraction f3(f1.getNum() * f2.getNum(), f1.getDen() * f2.getDen());*/
	/*Fraction f3 = f1.mult(&f2);*/
	Fraction f3 = f1 * f2;
	std::cout << f3.getNum() << "/" << f3.getDen() << '\n';
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
