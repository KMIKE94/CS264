#include<iostream>
#include<cstdlib>
#include "die.h"
using namespace std;

die::die(int initialsides){
	if(initialsides <= 4){
		numbersides_ = 6;
		cout << "An invalid number of sides have been entered " <<
				"default value is now 6" << endl;
	}else
		numbersides_ = initialsides;
}

int die::getValue(){
	return value_;
}

int die::getNumsides(){
	return numbersides_;
}

int die::roll(){
	int sides = getNumsides();
	value_ = rand()%sides + 1;
	return value_;
}
