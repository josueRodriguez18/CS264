#include<iostream>

using namespace std;

void my_swap(int &x, int &y);


int main(){
	int x, y;
	cout << "Please input two numbers to be swapped";
	cin >> x >> y;
	cout << "\nInitial x: " << x << "\nInitial y: " << y;
	my_swap(x,y);
	cout << "\nFinal x: " << x << "\nFinal y: " << y;


	return 0;
}

void my_swap(int &x, int &y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}