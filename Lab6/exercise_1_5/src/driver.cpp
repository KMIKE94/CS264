#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void print(vector<T> v){
	typename vector<T>::const_iterator i;
	for(i=v.begin(); i!=v.end(); ++i)
		std::cout << *i << " ";
}

int main(){
	vector<int> int_val;

	for(int i = 0; i < 10; i++)
		int_val.push_back(i);

	print(int_val);
}
