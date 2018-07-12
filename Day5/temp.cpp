#include<iostream>

using namespace std;

void swapPointers(int *var1, int *var2);
void swap2(int *var1, int *var2);

int main(){
	int x = 10, y = 15;
	
	int *p1, *p2;
	
	p1 = &x; p2 = &y;
	cout << "x: " << *p1 << " y: " << *p2;
	
	swap2(p1, p2);
	
	cout << endl << "x: " << *p1 << " y: " << *p2;

	return 0;
}



void swapPointers(int *var1, int *var2){
	int temp;
	temp = *var1;
	*var1 = *var2;
	*var2 = temp;
}

void swap2(int *var1, int *var2){
	int *temp;
	temp = var1;
	var1 = var2;
	var2 = temp;
	
	cout << endl << "x: " << *var1 << " y: " << *var2;
	
}