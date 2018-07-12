#include<iostream>

using namespace std;



int main(){
	int size;
	
	cout << "Please input the size of the sequence: ";
	
	cin >> size;
	
	double *p = new double[size];
	
	cout << "\n Please input your sequence elements now: ";
	
	for(int i = 0; i < size; i++){
		cin >> p[i];
	}
	
	for(int i = size - 1; 0 <= i; i++){
		
		cout << endl << p[i];
	}
	


	return 0;

}