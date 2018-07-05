#include<iostream>

using namespace std;

int square(int x, int size);
void changeContents(int array[], int size);

int main(){
	int billy[] = {1,2,3,4,5,6,7,8,9,10};
	int n;
	cout << "Original numbers: \n";
	for(n = 0; n < 10; n++){
		cout << billy[n] << " ";
	}
	cout << "\nFinal Numbers: \n";
	changeContents(billy, 10);
	for(n = 0; n < 10; n++){
		cout << billy[n] << " ";
	}


	return 0;
}


int square(int x){
	return x*x;
}

void changeContents(int array[], int size){
	int tempArray[]= {11,12,13,14,15,16,17,18,19,20};
	for(int i = 0; i < size; i++){
		array[i] = tempArray[i];
	}
	
	
	
	
}