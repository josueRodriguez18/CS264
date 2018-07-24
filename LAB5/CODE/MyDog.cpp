#include<iostream>
#include "Dog.h"
using namespace std;

int main(){
	Dog d1("Terrier", 0, 3), d2("Rottweiler" , 1, 4);
	
	d1.bark(); d2.bark();
	
	cout << "\nDog 1: " << d1.getBreed() << "\nAge: " << d1.getAge() << "\nDangerous?" << d1.getDanger(); 
	
	cout << "\nDog 1: " << d2.getBreed() << "\nAge: " << d2.getAge() << "\nDangerous?" << d2.getDanger(); 
	
	
	
	
	return 0;
}