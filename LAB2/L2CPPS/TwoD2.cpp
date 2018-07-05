#include<iostream>

using namespace std;

//prototypes
void addValueToArray(int array[3][5], int value);
void print2DArray(int array[3][5]);

int main(){
	//2d array initialization
	int my2DList[3][5] = {{43,0,7,9,12}, {4,-5,8,17,99}, {-2,36,48,76,15}};
	//outputting initial array to the user
	cout << "Array before adding: \n"; print2DArray(my2DList);
	//calling addToValue with the parameter 7
	addValueToArray(my2DList, 7);
	//printint out final array to user
	cout << "\nArray after adding 7 to each value: \n"; print2DArray(my2DList);

return 0;
}

void addValueToArray(int array[3][5], int value){
	//outer loop goes through rows
	for(int i = 0; i < 3; i++){
		//inner loop goes through columns
		for(int j = 0; j < 5; j++){
			//adds 7 to each element
			array[i][j] += 7;
		}
	}
}

void print2DArray(int array[3][5]){
	//outer loop handles rows
	for(int i = 0; i < 3; i++){
		//inner loop handles columns
		for(int j = 0; j < 5; j++){
			cout << array[i][j] << " ";
		}
		//line ends for formatting
		cout << endl;
	}	
}