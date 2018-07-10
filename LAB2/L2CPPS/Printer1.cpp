/* Josue Rodriguez
LAB2
July 5th, 2018 */
#include<iostream>

using namespace std;
//static function
static void printArray(int array[], int size);

int main(){
	int myDataList[] ={12,223,232,434,1433,0,-34,14,43,544,223};
		
	//Function call
	printArray(myDataList, 11);
	

	return 0;
}


static void printArray(int array[], int size){
	//loops through array and prints out elements
	for(int i = 0; i < size; i++){
		cout << array[i] << " ";
		
	}
	
	
	
}