#include <iostream>
#include <vector>
#include <string>

using namespace std;
template <typename T>

vector<T> reverseVectorFirst(vector<T> v){
	vector<T> newVector;
	for(int i = v.size()-1; i >= 0; i--){
		newVector.push_back(v[i]);
	}
	return newVector;
}
template<typename T>
vector<T> reverseVectorSecond(vector<T> v){
	int j = 0;
	for(int i = v.size() - 1; i > 0; i--){
		T temp = v[i];
		v[i] = v[j];
		v[j] = temp;
		j++;
	}
	return v;
}




int main(){
	
	vector<int> v1;
	vector<string> v2;
	for(int i = 0; i < 10; i++){
		v1.push_back(i);
		cout << v1[i];
	}
	cout << "\n";
	vector<int> rv1 = reverseVectorFirst(v1);
	for(int i : rv1){
		cout << rv1[i];
	}
	cout << "\n";

	v2.push_back("asd"); v2.push_back("test"); v2.push_back("rofl");

	vector<string> rv2 = reverseVectorFirst(v2);
	for(string s : rv2){
		cout << s;
	}
	cout << "\n";

	vector <string> rv22 = reverseVectorSecond(v2);
	for(string s : rv22){
		cout << s;
	}
	cout << "\n";

	vector<int> rv11 = reverseVectorSecond(v1);
	for(int i : rv11){
		cout << i;
	}

	cin.get();
	return 0;
}