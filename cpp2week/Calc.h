#include <iostream>
#include <vector>

class Calc
{
public:
	Calc(void);
	double calculate(std::string parseString);
private:
	double sum(std::vector<double> numbers);
	double addition(std::vector<double> numbers);
	double sub(std::vector<double> numbers);
};

