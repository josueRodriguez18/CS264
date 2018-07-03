//LAB1
//Josue Rodriguez
//July 2nd, 2018
#include <iostream>

using namespace std;
//Declaration of printHalf function
double printHalf(double inNumber);
//this function will take a double number and half it 
int main(){
    //number for function/input
    double x;
    //prompts user for a number
    cout << "Please enter a number to be halved \n";
    cin >> x; //takes input
    cout << "\n" << printHalf(x); //outputs halved number
    return 0;
}

double printHalf(double inNumber){
    return inNumber/2; //halves number
}