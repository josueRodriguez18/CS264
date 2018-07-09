/* Josue Rodriguez
LAB2
July 5th, 2018 */

#include <iostream>

using namespace std;
//prototypes
int countOccurences(int array[], int size, int target);

int main(){
	//initializes array
	int myDataList[] ={12,223,232,434,1433,0,-34,14,43,544,223};
	//outputs count occurences through a countOccurences call
	cout << countOccurences(myDataList, 11, 15);
	
	
	
	return 0;
}

//passes array, size and target value to be matched
int countOccurences(int array[], int size, int target){
	//initial occurences are 0
	int occurences = 0;
	for(int i = 0; i < size; i++){
		//loops through all elements
		if(array[i] == target){
				//if the target is matched increment occurences
				occurences++;
		}
	}
	
	
	return occurences;
}