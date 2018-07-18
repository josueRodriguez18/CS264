#include<iostream>

using namespace std;


int main(){
	Rectangle r1(10, 15), r2(20,25);
	
	cout << "R1 colour" << r1.getColour();
	cout << "\nR1 length " << r1.getLength(); << "\nR1 width " << r1.getWidth();
	
	cout << "R2 colour" << r2.getColour();
	cout << "\nR2 length " << r2.getLength(); << "\nr2 width " << r2.getWidth();
	
	r1.setColour("Blue"); r1.setWidth(35); r1.setLength(18);
	
	cout << "R1 colour" << r1.getColour();
	cout << "\nR1 length " << r1.getLength(); << "\nR1 width " << r1.getWidth();
	return 0;
}