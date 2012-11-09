#include <iostream>
#include <string>
#include <vector>
#include "Calc.h"

using namespace std;


//slow version
bool isPrime(int checkthis){

	for(int i = 2; i < checkthis; i++){
		if(checkthis % i== 0){
			return false;
		}
	}
	return true;
}

//sieve of Eratosthenes
void sieve(int max){
	vector<int> sieve;
	vector<int> primes;

	for(int i = 1; i < max + 1; ++i){
		sieve.push_back(i);
	}
	sieve[0] = 0;

	for(int i = 2; i < max + 1; ++i){
		if(sieve[i-1] != 0){
			primes.push_back(sieve[i-1]);
			cout << sieve[i-1] << " is a prime.\n";
			for(int j = 2 * sieve[i-1]; j < max + 1; j+= sieve[i-1]){
				sieve[j-1]=0;
			}
		}
	}


}


void printPrimes(int max){
	for(int i = 2; i <= max; i++){
		if(isPrime(i)){
			cout << i << " is prime.\n";
		}else{
			cout << i << " is not prime.\n";
		}
	}
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

	printPrimes(11);
	sieve(11);

	Calc calc;
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