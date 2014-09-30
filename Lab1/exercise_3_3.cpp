#include<iostream>
using namespace std;

int main(){
	int x, digit, divider=10000;
	cin >>	x;
	digit = x;
	cout << x/divider << endl;
	for(int i = 0; i < 4; i++){
		cout << digit%divider/(divider/10) <<endl;
		divider = divider/10;
	}
}
