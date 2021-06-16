#pragma once
#include<iostream>
using namespace std;
class Fraction
{
	int nume, denom;
public:
	Fraction();
	Fraction(int , int );
	Fraction operator -(Fraction);
	void display();
};
	int lcm(int, int);


	/*friend Complex operator ++(Complex);
	friend Complex operator --(Complex);*/
	/*Complex operator /=(Complex);*/