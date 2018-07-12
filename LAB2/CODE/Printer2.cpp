/* Josue Rodriguez
LAB2
July 5th, 2018 */

#include<iostream>

using namespace std;

//prototypes
void addToArrayContents(int array[], int add, int size);
static void printArray(int array[], int size);

int main(){
	int myDataList[] ={12,223,232,434,1433,0,-34,14,43,544,223};
	//function calls
	addToArrayContents(myDataList, 10, 11);
	printArray(myDataList, 11);
	
	
	return 0;
}

//prints array elements by looping through until the end
static void printArray(int array[], int size){
	for(int i = 0; i < size; i++){
		cout << array[i] << " ";
	}	
}
//adds the add parameter to every array element
void addToArrayContents(int array[], int add, int size){
	for(int i = 0; i < size; i++){
		array[i] += 10;
	}
}