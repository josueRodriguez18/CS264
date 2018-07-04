#include <iostream>

using namespace std;

int tripleMe(int);

int main(){
	
		int num1 = 10, num2 = 7, result = 0;
		cout << “About to use my new tripleMe function” << endl;
		result = tripleMe(num1); // passing variable num1 to a call to the function tripleMe
		cout << “the value in result is “ << result << endl;
		result = tripleMe(num2); // passing variable num2 to a call to the function tripleMe
		cout << “the value in result is “ << result << endl;
	
	return 0;
}

int tripleMe(int x){
	int result = x*3;
	return result;
}