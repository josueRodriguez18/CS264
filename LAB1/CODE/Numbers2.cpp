//LAB1
//Josue Rodriguez
//July 2nd, 2018

#include<iostream>

using namespace std;

int main(){
	
	//variable initialization
	int x, y, z, sum, average, product;
	//prompts user
	cout << "Please input three integers \n";
	//takes input from keyboard
	cin >> x; cin >> y; cin >> z;
	//math
	sum = x + y + z;
	product = x*y*z;
	average = sum / 3;
	//output for user
	cout << "Sum : " << sum << endl;
	cout << "Product : " << product << endl;
	cout << "Average : " << average << endl;
	
	
	
	
	return 0;
}