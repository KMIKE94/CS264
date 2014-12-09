#include <iostream>
#include <fstream>
using namespace std;

#include "singleton.h"

Singleton& Singleton::getInstance(){
	static Singleton instance;
	return instance;
}

void Singleton::write(const string & message){
	ofstream myfile;
	myfile.open("log.txt", std::ios_base::app);
	myfile << message << "\n";
}
