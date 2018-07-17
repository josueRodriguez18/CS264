#include<iostream>

using namespace std;

class Point{
	int x; int y;
	public:
		int getX(){ return x; };
		int getY(){ return y; };
		void setX(int x1){ x = x1; };
		void setY(int y1){ y = y1; };
		void printPoint(){ cout << "\nx: " << x << "\ny: " << y;}
		Point(int x1, int y1){ x = x1; y = y1; }
		Point(){ x = 0; y = 0;};
	
	
};


int main(){
	Point p1(10, 11), p2(13, 30);
	p1.printPoint(); p2.printPoint();
	Point *arr1 = new Point[5];
	arr1[0].setX(11); arr1[0].setY(22);
	arr1[4].setX(9); arr1[4].setY(22);
	
	arr1[0].printPoint(); arr1[4].printPoint();
	
	
	return 0;
}