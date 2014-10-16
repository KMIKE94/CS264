#include<iostream>
using namespace std;

struct person{
	string name;
	int age;
};

int main(){
	int num_people;
	cout << "How many people? ";
	cin >> num_people;

	person *people = new person[num_people];

	for(int i = 0; i < num_people; i++){
		cout << "Enter name : ";
		cin >> people[i].name;
		cout << "Enter age : ";
		cin >> people[i].age;	
	}

	for(int i = num_people-1; i >= 0; --i){
		cout << (people+i)->name << " " << (people+i)->age << endl;
	}

}
