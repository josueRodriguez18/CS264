#include "Rectangle.h"

void Rectangle::setWidth(double a) { width = a; }

void Rectangle::setLength(double a) {length = a;}

void Rectangle::setColour(double a) { colour = a; }
	
double Rectangle::getWidth() { return width; }
double Rectangle::getLength() { return length;}
string Rectangle::getColour() { return colour;}

double Rectangle::calculateArea() { return length*width;}
double Rectangle::calculatePermiter() {return 2*length + 2*width;}