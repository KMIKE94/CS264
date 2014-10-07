#include<iostream>
using namespace std;

void gcd(int num1, int num2){
	if(num1 > num2){
		for(int i = num1; i <= num1; i--){
			if(num1 % i == 0 && num2 % i == 0){
				cout << "The GCD is : " << i << endl;
				break;
			}
		}
	}else{
		for(int i = num2; i <= num2; i--){
			if(num1 % i == 0 && num2 % i == 0){
				cout << "The GCD is : " << i << endl;
				break;
			}
		}	
	}	
}

int main(){
	int firstnumber, secondnumber;
	cout << "Enter the first number : " << endl;
	cin >> firstnumber;
	cout << "Enter the second number : " << endl;
	cin >> secondnumber;
	gcd(firstnumber, secondnumber);

}
