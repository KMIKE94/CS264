#include<iostream>
using namespace std;

int main(){
	double accountNumber = 0;
	double balance, newBalance, check; 
	double total_of_items;
	double total_of_credit;
	double credit_limit;
	while(accountNumber != -1){
		cout << "Enter account number: ";
		cin >> accountNumber;
		cout << "Enter balance: ";		
		cin >> balance;
		cout << "Enter items charged: ";
		cin >> total_of_items;
		cout << "Enter total credit: ";
		cin >> total_of_credit;
		cout << "Enter credit limit: ";
		cin >> credit_limit;
		newBalance = balance + total_of_items - total_of_credit;
		check = credit_limit - newBalance;
		if(check < 0){
			cout << accountNumber << credit_limit << newBalance << endl;
			cout << "Credit limit exeeded" << endl;
}
		else
			cout << newBalance << endl;
	}

}
