#include<iostream>

using namespace std;

class Point{
	public:
		int x_pos, y_pos;	

	
};


int main(){
	Point beginning, end, middle;
	
	beginning.x_pos = 10;
	beginning.y_pos = 15;
	
	end.x_pos = 20;
	end.y_pos = 40;
	
	middle.x_pos =20;
	middle.y_pos = 15;
	
	cout << "Beginning members : " << beginning.x_pos << " " << beginning.y_pos;
	
	
	return 0;
}