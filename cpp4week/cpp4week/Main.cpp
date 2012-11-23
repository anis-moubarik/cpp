#include <iostream>
#include "Complex.h"
#include "IntStack.h";

int main()
{
	//Complex
	//Complex a(3.0f, -6.3f);
	//std::cout<<a<<"\n";

	//Complex b(-6.6f, 6.0f);
	//Complex c = b;

	//c = a;
	//b.getData();
	//c.getData();

	//if(b == c)
	//	std::cout<<"b == c";
	//else
	//	std::cout<<"b != c";

	//std::cout<<"\n"<<c.getModulus()<<"\n";

	//Complex d(0.0f, 0.0f);
	//d = a + b;
	//std::cout<<d<<"\n";

	//d = a - b;
	//std::cout<<d<<"\n";

	//d = a * b;
	//std::cout<<d<<"\n";

	//d = a / b;
	//std::cout << d << "\n";


	//IntStack
	IntStack is;

	for(int i = 0; i < 11; i++)
	{
		is.push(i);
	}

	std::cout<<is.pop()<<"\n";
	std::cout<<is.pop()<<"\n";
	is.push(43942);
	std::cout<<is.pop()<<"\n";

	IntStack is2;
	is2 = is;
	std::cout<<is2.pop()<<"\n";
	std::cout<<is.pop()<<"\n";

	return 0;
}