#include<iostream>

using namespace std;
//prototype
void printAllNames(string array[], int size);

int main(){
	//array of strings
	string namesList[] = {"Alison", "Bob", "Ciara", "Desmond", "Ellen", "Frank","Gerard"};
	printAllNames(namesList, 7);
	
	return 0;
}

//loops through array and prints out all the strings
void printAllNames(string array[], int size){
	//loops through and outputs all the names
	for(int i = 0; i <size; i++){
		cout << array[i] << endl;
	}	
}