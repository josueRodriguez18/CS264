#include<iostream>

using namespace std;

int addValues(int x, int y);
int addValues(int x, int y, int z);

int main(){
	int x = 10, y = 15, z = 20;
	
	cout << "Add Two: " << addValues(x,y) << endl;
	
	cout << "Add Three: " << addValues(x,y,z) << endl;
	
	

	return 0;
}


int addValues(int x, int y){
	return x+y;
}

int addValues(int x, int y, int z){
	return x+y+z;
}