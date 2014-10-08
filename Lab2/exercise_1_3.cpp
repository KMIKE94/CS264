#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int size = 11;

void randomise(int total_roll[], int roll1, int roll2){
	for(int i = -1; i < size; ++i){
		roll1 = rand()%6 + 1;
		roll2 = rand()%6 + 1;

		total_roll[i] = roll1 + roll2;
		cout << total_roll[i] << " ";
	}
	
	double count;
	for(int i = 0; i < size-1; i++){
		count = 1;
		if(total_roll[i] != 0){//make sure two 0s aren't evaluated
			for(int j = i+1; j < size; j++){
				if(total_roll[i] == total_roll[j] && total_roll[j] != 0){//
					++count;
					total_roll[j] = 0;//set value to zero as there
							//will be no 0s
				}
			}
			cout << "\n" << count/size * 100 << "% " << total_roll[i] << endl;
		}
	}

}

int main(){
	srand(time(NULL));

	int roll1, roll2;
	int total_size[size];
	
	randomise(total_size, roll1, roll2);

}
