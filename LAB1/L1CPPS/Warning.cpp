//LAB1
//Josue Rodriguez
//July 2nd, 2018

#include<iostream>

using namespace std;
//function declaration
void printWarningMessage();

int main(){
		for(int i = 1; i <= 7; i++){
			printWarningMessage();
			cout << " : " << i << endl;
		}
		
	
	return 0;
}

void printWarningMessage(){
	cout << "This is a warning message";
	//outputs to user	
}