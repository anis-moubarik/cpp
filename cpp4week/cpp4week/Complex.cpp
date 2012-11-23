#include <iostream>
#include "Complex.h"

Complex::Complex(float nx = 0.0f, float ny = 0.0f)
{
	x = nx;
	y = ny;
}

Complex::Complex(Complex &c)
{
	this->x=c.x;
	this->y=c.y;
}

void Complex::operator =(Complex c)
{
	x = c.x;
	y = c.y;
}

Complex Complex::operator+(Complex c)
{
	Complex tmp;
	tmp.x = this->x+c.x;
	tmp.y = this->y+c.y;
	return tmp;
}

Complex Complex::operator-(Complex c)
{
	Complex tmp;
	tmp.x = this->x-c.x;
	tmp.y = this->y-c.y;
	return tmp;
}

Complex Complex::operator*(Complex c)
{
	Complex tmp;
	tmp.x = (x*c.x)-(y*c.y);
	tmp.y = (x*c.y)+(y*c.x);
	return tmp;
}

Complex Complex::operator/(Complex c)
{
	float div = (c.x*c.x) + (c.y*c.y);

	Complex tmp;
	tmp.x = (x*c.x)+(y*c.y);
	tmp.x /= div;
	tmp.y = (y*c.x) - (x*c.y);
	tmp.y /= div;
	return tmp;
}

float Complex::getModulus()
{
	return sqrt((x*x)+(y*y));;
}

void Complex::setData(float nx, float ny)
{
	x = nx;
	y = ny;
}

void Complex::getData()
{
	std::cout<<"Enter real:";
	std::cin>>this->x;
	std::cout<<"Enter imaginary:";
	std::cin>>this->y;
}

bool Complex::operator==(Complex c)
{
	return (x == c.x) && (y == c.y) ? 1 : 0;
}

std::ostream& operator << (std::ostream &s, Complex &c)
{
	s<<"Real part = "<<c.x<<"\n"
		<<"Imaginary part = "<<c.y<<"\n";
	return s;
}