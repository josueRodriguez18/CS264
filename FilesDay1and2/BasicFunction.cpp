#include <iostream>

using namespace std;

//int square(int, int); // you only need this prototype if you want to define the function beneath main

/*
 This function adds two numbers together.
*/
void printDetails(){
	cout << " \nJosue Rodriguez \nTexas Tech University \n";
}
int square(int b) {

  return b*b; //adds them simply
  
}

int main() {

//value doesn't need an initial value but it's ok 
 int value = 0;
//value to be squared
 int number1 = 5;
 for(int number1 = 1; number1 <= 20;number1++){
	value = square(number1);
	cout << "\nThe value of " << number1 << " squared is : " << value; 
 }

 printDetails();
//outputs original value and squared value
 

 return 0; // not necessary but good practice.

}


