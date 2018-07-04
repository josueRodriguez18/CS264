#include<iostream>
#include<array>

using namespace std;

//prototype
int linearSearchForLargest(int array[], int size);

int main(){
	int myDataList[] ={12,223,232,434,1433,0,-34,14,43,544,223};
	//outputs largest number
	cout << linearSearchForLargest(myDataList, 11);
	
	return 0;
}


int linearSearchForLargest(int array[], int size){
	int largest, w = 1, i = 0; //i will serve as indexer, w is stepper
	while(i+w < size){ //while the index and stepper are still within the bounds of the array size
		if(array[i] > array[i+w]){ //if the current item is larger than the following item assign largest and increment the stepper
			largest = array[i]; //update largest variable
			w += 1; //increment
		}
		else{ //else increment indexer and reset w and start searching again. 
			i += 1; //increment indexer
			w = 1; //reset stepper
		}	
	}
	return largest;
}