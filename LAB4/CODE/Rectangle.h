#include<iostream>

using namespace std;

class Rectangle{
	double length, width; string colour;
	
	public:
		Rectangle(double l, double w){
			colour = "grey"; length = l; width = w;
		}
		
		void setWidth(double a);
		void setLength(double a);
		void setColour(double a);
		
		double getWidth();
		double getLength();
		string getColour();
		
		double calculateArea();
		double calculatePermiter();
		
};