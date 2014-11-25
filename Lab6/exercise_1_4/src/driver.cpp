#include <iostream>
using namespace std;

template<typename T, int len>
void print(T (&v)[len]){
	for(int i = 0; i < len; i++){
		cout << v[i] << " ";
	}
	cout << endl;
}

int main(){

	double double_val[10];

	for(int i = 0; i < 10; i++)
		double_val[i] = i*2.79;

	print(double_val);

	string str_val[10];

	for(int i = 0; i < 10; i++)
		str_val[i] = "Hello";

	print(str_val);

	return 0;
}
