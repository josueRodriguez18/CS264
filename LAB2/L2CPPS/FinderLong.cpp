/* Josue Rodriguez
July 5th, 2018 */

#include<iostream>

using namespace std;

//prototype
string getLongestName(string array[], int size);

int main(){
	//string array declaration
	string namesList[] = {"Alison", "Bob", "Ciara", "Desmond", "Ellen", "Frank","Gerard"};
	//output to user
	cout << "The longest name is : " << getLongestName(namesList, 7);
	
	return 0;
}

//finds the longest name and returns it using pointers
string getLongestName(string array[], int size){
	//string pointer
	string* longestName = array;
	//loops through array comparing lengths and updating the pointer if a longer string is found
	for(int i = 0; i < size; i++){
		//length of current item vs length of the value at the pointer. Arrow access the dereferenced pointer's members
		if(array[i].length() > longestName->length()){
			//updates array address if a longer name is found
			longestName = array + i;
		}
	}
	//dereferences and returns longest name
	return *longestName;
}