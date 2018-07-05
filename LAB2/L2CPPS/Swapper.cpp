#include<iostream>

using namespace std;
//my_swap prototype, no need to return values
void my_swap(int &x, int &y);


int main(){
	int x, y; //variable declarations
	//prompts users
	cout << "Please input two numbers to be swapped ";
	//takes input
	cin >> x >> y;
	//outputs initial values to user
	cout << "\nInitial x: " << x << "\nInitial y: " << y;
	//function call
	my_swap(x,y);
	cout << "\nFinal x: " << x << "\nFinal y: " << y;


	return 0;
}

//function definition, passes by reference
void my_swap(int &x, int &y){
	//temporary variable for swapping
	int temp;
	temp = x;
	x = y;
	y = temp;
}