#include<iostream>

using namespace std;

int main(){
	
	//variable initialization
	int x, y, sum, average, product;
	//prompts user
	cout << "Please input two integers \n";
	//takes input from keyboard
	cin >> x; cin >> y;
	sum = x + y;
	product = x*y;
	average = product / 2;
	
	cout << "Sum : \n" << sum;
	cout << "Product : \n" << product;
	cout << "Average : \n" << average;
	
	
	
	
	return 0;
}