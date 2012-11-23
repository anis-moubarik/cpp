#ifndef COMPLEX_H
#define COMPLEX_H
class Complex{
public:
	Complex(float,float);
	Complex(Complex&);
	Complex operator + (Complex);
	Complex operator - (Complex);
	Complex operator * (Complex);
	Complex operator / (Complex);
	bool operator == (Complex);
	void operator = (Complex);
	friend std::ostream& operator << (std::ostream &s, Complex &c);
	float getModulus();
	void setData(float,float);
	void getData();
	float getX() const {return x;}
	float getY() const {return y;}

private:
	float x, y;
};
#endif