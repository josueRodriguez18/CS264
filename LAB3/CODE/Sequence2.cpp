#include<iostream>

using namespace std;

void reSize();
int currSize = 10; double *current = new double[currSize];


int main(){
	int i = 0, in = 0;
	
	cout << "The program will continue taking input until -1 is read";
	
	
	cout << "\n Please input your sequence elements now: ";
	cin >> in;
	
	while(in != -1){
		if(i >= currSize){
			reSize();
		}
		current[i] = in;
		i++;
		cout << "\n Please input your sequence elements now: ";
		cin >> in;
		
	}
	for(int j = i; j >= 0; j--){
		cout << endl << current[j];
	}
	


	return 0;

}

void reSize(){
	int oldSize = currSize; currSize += 10;
	double *temp = new double[currSize];
	memcpy( temp, current, oldSize*sizeof(double) );
	delete[] current;
	current = temp;
	
}