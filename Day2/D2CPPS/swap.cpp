/*
  Josue Rodriguez 
  July 3rd, 2018
  This program swaps two pre defined variables and asks the user for inptu variables to switch
  
*/
#include<iostream>
using namespace std;



void swap(int a, int b){
		int temp = a;
		a = b; b = temp;
}

int main(){
	//variable initialization
	int x ,y, temp;
	cout << "\nEnter 2 values to be swapped\n";
	cin >> x >> y; //takes input
	cout << "\ninitial x: " << x << " initial y: " << y;
	//swaps
	swap(x,y);
	//outputs
	cout << "\nFinal ";
	cout << "x: " << x << " y: " << y;
	

	return 0;
}