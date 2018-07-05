#include<iostream>

using namespace std;
//prototypes
int arrayContainsValue(int array[], int size, int target);

int main(){
	int myDataList[] ={12,223,232,434,1433,0,-34,14,43,544,223};
	//outputs value index to user
	cout << arrayContainsValue(myDataList, 11, 0);


	return 0;
}

	//searches through array by using a for loop that breaks if the value is matched. Outputs -1 if the value is not in the array outputs -1
int arrayContainsValue(int array[], int size, int target){
	int index = 0, i;
	//moves through the array until the target is matched or the incrementer is out of bounds of the array
	for(i = 0; i < size && array[i] != target; i++);
	if(array[i] != target){ //checks if they're mismatched. If they are the target was not found in the array
		index = -1; //set -1 bc it's an impossible index
	}
	else{
		index = i; //the target was found
	}
	
	//output index
	return index;
}