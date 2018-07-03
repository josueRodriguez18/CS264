//LAB1
//Josue Rodriguez
//July 2nd, 2018
#include <iostream>

using namespace std;
double printHalf(double inNumber);

int main(){
    //number for function
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