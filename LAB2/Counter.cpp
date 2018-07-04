#include <iostream>

using namespace std;

int countOccurences(int array[], int size, int target);

int main(){
	int myDataList[] ={12,223,232,434,1433,0,-34,14,43,544,223};
	cout << countOccurences(myDataList, 11, 15);
	
	
	
	return 0;
}

int countOccurences(int array[], int size, int target){
	int occurences = 0;
	for(int i = 0; i < size; i++){
		if(array[i] == target){
				occurences++;
		}
	}
	
	
	return occurences;
}