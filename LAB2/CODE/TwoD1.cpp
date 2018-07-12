/* Josue Rodriguez
LAB2
July 5th, 2018 */

#include<iostream>

using namespace std;
//prototype
void print2DArray(int array[3][5]);

int main(){
	//2d array initialization
	int my2DList[3][5] = {{43,0,7,9,12}, {4,-5,8,17,99}, {-2,36,48,76,15}};
	//outputs to user through print2DArray call
	print2DArray(my2DList);
return 0;
}



void print2DArray(int array[3][5]){
	//outer loop handles rows
	for(int i = 0; i < 3; i++){
		//inner loop handles columns
		for(int j = 0; j < 5; j++){
			cout << array[i][j] << " "; //space for formatting
		}
		cout << endl; // endl for formatting
	}
}