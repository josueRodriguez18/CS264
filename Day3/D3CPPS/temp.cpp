#include <iostream>

using namespace std;

//changeMe prototype
void changeMe(int &x,int y);


int main(){
		//initializes variable
		int x = 0;
		//prints variable to user before function call
		cout << " x: \n"; 
	
		//passes x by reference to changeMe
		changeMe(x , 99);
		//outputs to user
		cout << "new x: " << x;
	
	return 0;
}
//takes in a value by reference and a desired value then assigns that value to the reference variable
void changeMe(int &x, int y){
	x = y;	
}

