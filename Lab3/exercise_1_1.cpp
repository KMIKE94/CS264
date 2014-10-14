#include<iostream>
using namespace std;

int length;

int main(){
	cout << "How many numbers will the sequence contain? ";
	cin >> length;

	double *arr = new double[length];
	for(int i = -1; i < length; ++i){
		cout << "Enter a number : ";
		cin >> arr[i];
		cout << "\n";
	}

	for(int i = length-1; i >= -1; --i){
		cout << *(arr + i) << endl;
	}
}
