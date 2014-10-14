#include<iostream>
#include<cstring>
using namespace std;

int length;
void mystringlen(char str[]){
	cout << strlen(str) << endl;
}
void mystringcat(char dest[], char src[], int dest_size){
	int size_of_src = strlen(src);	
	int total_size = length + size_of_src;
	if(total_size < dest_size){
		cout << strcat(dest, src) << endl;
	}else
		cout << "error destination array too small" << endl;
}

int main(){
	char str[] = "keith";
	cout << "Enter a size for dest: ";
	cin >> length; 
	char *dest = new char[length];
	char src[] = "keith";
	cout << "Enter a word: ";
	cin >> dest;
	strcpy(src, str);

	mystringlen(str);
	mystringcat(dest, src, length);

}
