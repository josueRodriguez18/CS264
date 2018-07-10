#include<iostream>

using namespace std;



int main(){
	int size = 10, i = 0, in = 0;
	
	cout << "The program will continue taking input until -1 is read";
	
	double *p = new double[size];
	
	cout << "\n Please input your sequence elements now: ";
	
		do{
			cin >> in;
			if(in != -1){
				p[i] = in;
				i++;
			}
			if( i >= size){
				size+=2;
				double *q = new double[size];
				for(int j = 0; j < size-2; j++){
					q[j] = p[j];
				}
				delete[] p;
				double *p = new double[size];
				for(int z = 0; z < size; z++){
					p[z] = q[z];
				}
				delete[] q;
				cout << " working " << endl;
				
			}
			if(i%4 == 0){
				for(int x = 0; x < size -1; x++){
					cout << p[x] << " ";
					
				}
				cout << endl;
			}
			
			
			
		}while (in != -1);


	return 0;

}