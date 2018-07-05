#include<iostream>

using namespace std;

//prototype
int lengthOfLongestName(string array[], int size);

int main(){
		//string initialization
		string namesList[] = {"Alison", "Bob", "Ciara", "Desmond", "Ellen", "Frank","Gerard"};
		//outputs string to user
		cout << "The length of the longest name is: " << lengthOfLongestName(namesList, 7);
	return 0;
}

//function definition
int lengthOfLongestName(string array[], int size){
	//length of first element for comparison
	int length = array[0].length();
	for(int i = 1; i < size; i++){
		//compares elements until a larger one is found and then replaces length
		if(array[i].length() > length){
			length = array[i].length();
		}	
	}
}