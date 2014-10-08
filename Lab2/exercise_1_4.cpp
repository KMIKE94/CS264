#include<iostream>
#include<cstring>
using namespace std;

void mystringlen(char str[]){
	cout << strlen(str) << endl;
}
void mystringcat(char dest[], char src[], int dest_size){
	int total_size = strlen(dest) + strlen(src);
	if(total_size < dest_size){
		cout << strcat(dest, src) << endl;
	}else
		cout << "error destination array too small" << endl;
}

int main(){
	char str[] = "keith";
	char dest[15]; 
	char src[] = "keith";
	cin >> dest;
	strcpy(src, str);

	mystringlen(str);
	mystringcat(dest, src, 15);

}
