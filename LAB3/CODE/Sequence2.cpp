#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

void resize();
//void printAll(double arr[], int i);
int currSize = 10;
double *current = new double[currSize];


int main(){
	double in; int i = 0;
	cout << "The program will continue taking input until -1 is read";
	
	
	cout << "\n Please input your sequence elements now: ";
	cin >> in;
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
			
			
		


	return 0;

}

void resize(){
	int newSize = currSize + 10;
	double *arr = new double[newSize];
	memcpy( arr, current, currSize*sizeof(double) );
	currSize = newSize;
	delete[] current;
	current = arr;
	
}