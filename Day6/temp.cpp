#include<iostream>


using namespace std;

class Rectangle{
	int length;
	int width;
	
	public:
		int getWidth(){return width;};
		int getLength(){return length;};
		int getArea(){return length*width;};
		void setWidth(int wid){ width = wid; };
		void setLength(int len){ length = len;};
	
	
	
	Rectangle(){
		length = 0;
		width = 0;
	}
	Rectangle(int len, int wid){
		length = len;
		width = wid;
		
	}
};

int main(){
	Rectangle rect1; Rectangle rect2(5, 4);
	
	cout << "Rect1 length: " << rect1.getLength() << endl;
	cout << "Rect1 width: " << rect1.getWidth() << endl;
	cout << "Rect1 area: " << rect1.getArea() << endl;
	
	cout << "Rect2 length: " << rect2.getLength() << endl;
	cout << "Rect2 width: " << rect2.getWidth() << endl;
	cout << "Rect2 area: " << rect2.getArea() << endl;


	return 0;
}