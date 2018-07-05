#include<iostream>
#include<cstring>

using namespace std;

int main(){
		char forename[] = "John";
		char surname[] = "McDonald";
		char fullname[20] = {'\0'};
		strcat(fullname, forename);
		strcat(fullname, " ");
		strcat(fullname, surname);
		cout << fullname << endl;
	
	
	
	return 0;
}