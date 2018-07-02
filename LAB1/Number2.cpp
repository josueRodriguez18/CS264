//LAB1
//Josue Rodriguez
//July 2nd, 2018

#include<iostream>

using namespace std;

int main(){
	
	//variable initialization
	int x, y, z, sum, average, product;
	//prompts user
	cout << "Please input two integers \n";
	//takes input from keyboard
	cin >> x; cin >> y; cin >> z;
	sum = x + y + z;
	product = x*y*z;
	average = sum / 3;
	
	cout << "Sum : \n" << sum;
	cout << "Product : \n" << product;
	cout << "Average : \n" << average;
	
	
	
	
	return 0;
}