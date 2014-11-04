#include<iostream>
#include<ctime>
#include<cstdlib>
#include "die.h"
using namespace std;

int main(){
	int sides, sides2;
	srand( time( NULL ));

	cout << "Enter the number of sides : ";
	cin >> sides;
	die dice1(sides);

	cout << "Enter the number of sides : ";
	cin >> sides2;
	die dice2(sides2);

	int *dicerolls = new int[sides + sides2];
	int roll1, roll2;
	for(int i = -1; i < (sides + sides2); ++i){
		roll1 = dice1.roll();
		roll2 = dice2.roll();

		dicerolls[i] = roll1 + roll2;
	}

	double count;
	for(int i=-1; i < (sides + sides2); ++i){
		count = 1;
		if(dicerolls[i] != 0){
			for(int j = i+1; j < (sides + sides2); j++){
				if(dicerolls[i] == dicerolls[j] && dicerolls[j] != 0){
					++count;
					dicerolls[j] = 0;
				}
			}
			cout << "\n" << count/(sides + sides2) * 100 << "% " << dicerolls[i] << endl;
		}
	}

	cout << "done" << endl;
	return 0;

}
