#include <iostream>
#include <string>
#include <vector>
#include "Calc.h"

using namespace std;

bool isPrime(int checkthis){

	for(int i = 2; i < checkthis; i++){
		if(checkthis % i== 0){
			return false;
		}
	}

	return true;

}

int main(){
	//cout << "Hello world\n";

	//string s;
	//cout << "Give me your name\n";
	//getline(cin, s);
	//cout <<"Hello " << s << "\n";

	//vector<int> numbers;
	//for(int i = 0; i < 3; i++){
	//	numbers.push_back(i);
	//}

	//vector<int>::iterator it;

	//for(it=numbers.begin(); it < numbers.end(); it++){
	//	cout << *it << "\n";
	//}

	//int isThisAPrime = 0;

	//cout << "Give me an number, and I'll check if it is an prime number\n";
	//cin >> isThisAPrime;

	//bool isAPrime = isPrime(isThisAPrime);

	//if(isAPrime == true){
	//	cout << "The number is a prime\n";
	//}else{
	//	cout << "The nume is not a prime\n";
	//}

	//cout<<"\n";
	//cin.get();

	Calc calc;

	cout << calc.calculate("+ 100 3.13 4") << "\n";

	string calculations;
	while(true){
		cout << "Give us something to calculate. (type quit to quit)\n";
		getline(cin, calculations);
		if(calculations == "quit"){
			break;
		}
		cout << "The result is " << calc.calculate(calculations) << "\n";
	}

	return 0;
}