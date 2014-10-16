#include<iostream>
using namespace std;

struct person{
	string name;
	int age;
};

int main(){
	int length;
	cout << "How many people? ";
	cin >> length;
	person *people = new person[length];
	
	for(int i = -1; i < length; ++i){
		cout << "Enter name : ";
		cin >> people[i].name;
		cout << "\n";
		cout << "Enter age : ";
		cin >> people[i].age;
		cout << "\n";
	}
}
