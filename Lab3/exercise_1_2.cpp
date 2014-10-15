#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int num_elements = 4;
	const int size_increase = 4;
	
	double *elements = new double[num_elements];
	double *newarr = new double[num_elements + size_increase];

	int i = 0;
	cout << "Enter a number : ";
	cin >> elements[i];

	while(true){
		++i;
		if(i == num_elements){
			memcpy(newarr, elements, num_elements);
			num_elements = num_elements + size_increase;
			delete[] elements;

			cout << "increasing array size to " << num_elements << endl;
			elements = new double[num_elements];
			memcpy(elements, newarr, num_elements - size_increase);

			delete[] newarr;
			newarr = new double[num_elements];
		}

		cout << "Enter a number : ";
		cin >> elements[i];
		
		if(elements[i] == -1)
			break;
	}

	cout << "Finished" << endl;

	delete[] elements;
	delete[] newarr;
	
}
