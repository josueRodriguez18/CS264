//LAB1
//Josue Rodriguez
//July 2nd, 2018

#include<iostream>

using namespace std;

int main(){
	
	//variable initialization
	int x, y, sum, average, product;
	//prompts user
	cout << "Please input two integers \n";
	//takes input from keyboard
	cin >> x; cin >> y;
	//adds
	sum = x + y;
	//multiplies
	product = x*y;
	//takes the average of the numbers (although they're integers)
	average = sum / 2;
	//output to the user
	cout << "Sum : " << sum << endl;
	cout << "Product : " << product << endl;
	cout << "Average : " << average << endl;
	
	
	
	
	return 0;
}