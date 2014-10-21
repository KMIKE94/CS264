#include<iostream>
#include<string>
using namespace std;

struct customer{
	string name;

	customer *next;
};

customer *createlist(string name){
	customer *head = new customer;
	head->name = name;
	head->next = NULL;
	return head;
}

void printcustomers(customer *head){
	customer *cur = head;
	while(cur){
		cout << cur->name << endl;
		cur = cur->next;
	}
}

int listlength(customer *head){
	
}


void insertname(customer *head, string name){
	customer *newNode = new customer;
	newNode->name = name;
	newNode->next = NULL;

	customer *cur = head;
	while(cur){
		if(cur->next == NULL){
			cur->next = newNode;
			return;
		}
		cur = cur->next;
	}
}


int main(){
	string name;

	cout << "Enter a name ";
	cin >> name;
	customer *customer1;
	customer1 = createlist(name);
	
	while(name != "end"){
		cout << "Enter a name ";
		cin >> name;
		insertname(customer1, name);
	}

	printcustomers(customer1);

	/*
	customer *cur = customer1;
	while(cur){
		cout << cur->name;
		cur = customer1->next;
	}
	*/	
	
}