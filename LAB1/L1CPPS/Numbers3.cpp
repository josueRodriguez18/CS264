//LAB1
//Josue Rodriguez
//July 2nd, 2018
 #include <iostream>
 
 using namespace std;
 
 int main(){
	 int x, y;
	 //prompts user for input
	 cout << "Please enter two integers for comparison" << endl;
	 //takes input
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
	 //x less than
	 else{
		 cout << "The largest number is: " << y;
	 }
	 
	 return 0;
	 
	 
	 
 }