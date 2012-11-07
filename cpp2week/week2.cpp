#include <iostream>
#include <string>
#include <vector>

using namespace std;

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

	cout << "Press any key to exit\n";
	cin.get();
	return 0;
}