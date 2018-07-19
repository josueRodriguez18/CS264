#include<iostream>
#include "Rectangle.h"

using namespace std;


int main(){
	Rectangle r1(10, 15), r2(20,25), r3(30,66), r4(50, 27);
	
	cout << "R1 colour " << r1.getColour();
	cout << "\nR1 length " << r1.getLength() << "\nR1 width " << r1.getWidth();
	
	cout << "R2 colour " << r2.getColour();
	cout << "\nR2 length " << r2.getLength() << "\nR2 width " << r2.getWidth();
	
	r1.setColour("Blue"); r1.setWidth(35); r1.setLength(18);
	
	cout << "\nR1 colour " << r1.getColour();
	cout << "\nR1 length " << r1.getLength() << "\nR1 width " << r1.getWidth();
	
	cout << "\nR1 Area: " << r1.calculateArea() << endl << "R1 Perimeter: " << r1.calculatePerimeter();
	
	cout << "\nR2 Area: " << r2.calculateArea() << endl << "R2 Perimeter: " << r2.calculatePerimeter();
	
	Rectangle arr[4] = {r1, r2, r3, r4};
	
	
	
	return 0;
}