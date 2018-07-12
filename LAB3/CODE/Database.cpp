#include "customers.h"
#include<iostream>


using namespace std;

int main(){
	string temp;
	cout << "This program will continue to enter customers into a linked list until the customers name is end";
	cout << endl << "Please input the first customers's name \n";
	cin >> temp;
	customers *first = new customers; 
	
		
	cout << endl << "Please input the first customers name \n";
	cin >> temp;
	while(temp != "end"){
		first->insertName(first, temp);
		cout << "Current length: " << first->currentLength(first) << endl;
		cout << "Current members: "; first->print_customers(first);
		cout << endl << "Please input the first customers name \n";
		cin >> temp;
	}

	return 0;
}