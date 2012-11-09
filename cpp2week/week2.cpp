#include <iostream>
#include <string>
#include <vector>

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
	cout << "Hello world\n";

	string s;
	cout << "Give me your name\n";
	getline(cin, s);
	cout <<"Hello " << s << "\n";

	vector<int> numbers;
	for(int i = 0; i < 3; i++){
		numbers.push_back(i);
	}

	vector<int>::iterator it;

	for(it=numbers.begin(); it < numbers.end(); it++){
		cout << *it << "\n";
	}

	int isThisAPrime = 0;

	cout << "Give me an number, and I'll check if it is an prime number\n";
	cin >> isThisAPrime;

	bool isAPrime = isPrime(isThisAPrime);

	if(isAPrime == true){
		cout << "The number is a prime\n";
	}else{
		cout << "The nume is not a prime\n";
	}

	cout<<"\n";
	cin.get();
	return 0;
}