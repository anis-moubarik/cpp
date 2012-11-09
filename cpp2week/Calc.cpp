#include "Calc.h"
#include <sstream>
#include <istream>
#include <iterator>
#include <stdlib.h>

using namespace std;

Calc::Calc(void)
{
}

double Calc::calculate(string parseString){

	std::stringstream pieces(parseString);

	std::istream_iterator<std::string> it(pieces);
	std:istream_iterator<std::string> end;
	std::vector<std::string> results(it, end);

	string operand = results[0];
	size_t found = results[results.size()-1].find(";");
	if(found == UINT_MAX){
		cout << "Invalid input. Make sure you have semi-colon in your input\n";
		return 0;
	}

	std::vector<double> numbers;

	for(int i = 1; i < results.size(); i++){
		double number = atof(results[i].c_str());
		numbers.push_back(number);
	}

	if(operand == "+"){
		return sum(numbers);
	}else if(operand == "*"){
		return addition(numbers);
	}else if(operand == "-"){
		return sub(numbers);
	}else{
		return div(numbers);
	}
	return 0;
}

double Calc::sum(vector<double> numbers){
	vector<double>::iterator it;
	double sum = 0;
	for(it = numbers.begin(); it < numbers.end(); it++){
		sum += *it;
	}
	return sum;
}

double Calc::addition(vector<double> numbers){
	//if(numbers.size() > 2){
	//	cout << "Too many numbers.\n";
	//	return 0;
	//}
	vector<double>::iterator it;
	double addition = numbers[0];
	for(it = numbers.begin() + 1; it < numbers.end(); it++){
		addition *= *it;
	}
	return addition;
}

double Calc::sub(vector<double> numbers){
	vector<double>::iterator it;
	double sub = numbers[0];
	for(it = numbers.begin() + 1; it < numbers.end(); it++){
		sub -= *it;
	}
	return sub;
}

double Calc::div(vector<double> numbers){
	vector<double>::iterator it;
	double div = numbers[0];
	for(it = numbers.begin() + 1; it < numbers.end(); it++){
		div /= *it;
	}
	return div;
}