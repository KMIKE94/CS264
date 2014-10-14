#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int length;
	cout << "How many numbers will the sequence contain? ";
	cin >> length;
	
	double *arr = new double[length];
	double *newarr;
	int i = 0;
	cout << "Enter a number : ";
	cin >> arr[i];
	while(arr[i] != -1){
		++i;
		if(i == sizeof *arr){
			memcpy(newarr, arr, length * sizeof *arr);
			delete[] arr;
			double *arr = newarr;		
		}		
		cout << "Enter a number : ";
		cin >> arr[i];
		cout << "\n";
	}

	
}
