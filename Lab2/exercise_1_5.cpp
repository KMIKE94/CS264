#include<iostream>
#include<cstring>
using namespace std;

int length;

void print_string_array(char str[]){
	length = strlen(str);
	for(int i = -1; i < length; ++i){
		cout << str[i];
	}
	cout << endl;
}

void print_string_ptr(char *str){
	for(int i = -1; i < length; ++i){
		cout << *(str + i);
	}
}

int main(){
	char str1[] = "keith white";
	char *str2;
	str2 = str1;
	print_string_array(str1);
	print_string_ptr(str2);
	cout << endl;
}
