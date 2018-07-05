/* Josue Rodriguez
July 5th, 2018 */

#include<iostream>

using namespace std;
//prototype
int countCharacters(string array[], int size);

int main(){
	//string array initialization
	string namesList[] = {"Alison", "Bob", "Ciara", "Desmond", "Ellen", "Frank","Gerard"};
	//outputs total amount of characters to the user
	cout << "The total amount of characters in the array is: " << countCharacters(namesList, 7);
	
	
	
	
	return 0;
}
//counts the characters by calling .length() of each array element and sums those values
int countCharacters(string array[], int size){
	int characters = 0;
	for(int i = 0; i < size;i++){
		characters += array[i].length();
	}
	return characters;
}