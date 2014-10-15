#include<iostream>
using namespace std;

int num_elements;

int main(){
	
	cout << "How many numbers will the sequence contain? ";
	cin >> num_elements;

	double *elements = new double[num_elements];
	for(int i = 0; i < num_elements; i++){
		cout << "Enter a number : ";
		cin >> elements[i];
	}
	
	for(int i = num_elements-1; i >= 0; --i){
		cout << *(elements + i) << endl;
	}

	delete[] elements;
	return 0;
	
}
