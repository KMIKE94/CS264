#include<iostream>
using namespace std;

void sum(int x, int y, int z){
	cout << "sum: " << x + y + z << endl;
}

void average(int x, int y, int z){
	cout << "average: " << (x + y + z)/3 << endl;
}

void product(int x, int y, int z){
	cout << "product: " << (x * y * z) << endl;
}

void smallest(int x, int y, int z){
	if(x < y && x < z)
		cout << x << " is the smallest" << endl;
	else if(y < x && y < z)
		cout << y << " is the smallest" << endl;
	else
		cout << z << " is the smallest" << endl;
}

void largest(int x, int y, int z){
	if(x > y && x > z)
		cout << x << " is the largest" << endl;
	else if(y > x && y > z)
		cout << y << " is the largest" << endl;
	else
		cout << z << " is the largest" << endl;
}

int main(){
	int x, y, z;
	cin >> x;
	cin >> y;
	cin >> z;
	sum(x, y, z);
	average(x, y, z);
	product(x ,y, z);
	smallest(x, y, z);
	largest(x, y, z);
	return 0;
}
