//LAB1
//Josue Rodriguez
//July 2nd, 2018
 #include <iostream>
 
 using namespace std;
 
 int main(){
	 int x, y;
	 cout << "Please enter two integers for comparison" << endl;
	 cin >> x;
	 cin >> y;
	 //x bigger
	 if(x > y){
		 cout << "The largest number is: " << x;
	 }
	 //equal
	 else if(x == y){
		 cout << "The numbers are equal";
	 }
	 //less than
	 else{
		 cout << "The largest number is: " << y;
	 }
	 
	 return 0;
	 
	 
	 
 }