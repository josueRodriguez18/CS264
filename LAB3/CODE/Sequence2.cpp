#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

<<<<<<< HEAD
void reSize();
int currSize = 10; double *current = new double[currSize];


int main(){
	int i = 0, in = 0;
	
=======
void resize();
//void printAll(double arr[], int i);
int currSize = 10;
double *current = new double[currSize];


int main(){
	double in; int i = 0;
>>>>>>> 5bac2235d29dbbe149646c6f17db959b17f77f22
	cout << "The program will continue taking input until -1 is read";
	
	
	cout << "\n Please input your sequence elements now: ";
	cin >> in;
<<<<<<< HEAD
	
	while(in != -1){
		if(i >= currSize){
			reSize();
		}
		current[i] = in;
		i++;
		cout << "\n Please input your sequence elements now: ";
		cin >> in;
		
	}
	for(int j = i; j >= 0; j--){
		cout << endl << current[j];
	}
	
=======
		while(in != -1){
			if(i >= currSize){
				resize();
			}
			cout << "\n Please input your sequence elements now: ";
			cin >> in;
			current[i] = in;
			i++;
		}
		
		cout << "\n current members: ";
		for(int j = 0; j < i; j++){
			cout << endl << current[j]; 
		}
			
			
		
>>>>>>> 5bac2235d29dbbe149646c6f17db959b17f77f22


	return 0;

}

<<<<<<< HEAD
void reSize(){
	int oldSize = currSize; currSize += 10;
	double *temp = new double[currSize];
	memcpy( temp, current, oldSize*sizeof(double) );
	delete[] current;
	current = temp;
=======
void resize(){
	int newSize = currSize + 10;
	double *arr = new double[newSize];
	memcpy( arr, current, currSize*sizeof(double) );
	currSize = newSize;
	delete[] current;
	current = arr;
>>>>>>> 5bac2235d29dbbe149646c6f17db959b17f77f22
	
}