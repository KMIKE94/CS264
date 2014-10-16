#include<iostream>
#include<string>
using namespace std;

struct customer{
	string name;
	customer *next;
};

void printcustomer(customer &head){
	customer *cur = &head;
	while(cur != NULL){
		cout << cur->name << endl;
		cur = cur->next;
	}
}

int main(){
	customer customer1, customer2, customer3;
	customer1.next = &customer2;
	customer2.next = &customer3;

	customer3.next = NULL;
	customer1.name = "Jack";
	customer2.name = "John";
	customer3.name = "Keith";

	printcustomer(customer1);
	return 0;
}