#include<iostream>

using namespace std;

struct People{
	string Name;
	int Age;
	
	
	/*People(string name, int age){
		Name = name; Age = age;
	};*/
};

 

int main(){
	int size, age; string name;
	
	cout << "Please enter the amount of people to be read in\n";
	
	cin >> size;
	
	People* p = new People[size];
	
	for(int i = 0; i < size; i++){
		cout << "Name Age \n";
		cin >> p[i].Name >> p[i].Age;	
	}
	
	for(int j = size - 1; j >= 0; j--){
		cout << endl <<p[j].Name << " " << p[j].Age << endl;
	}

		
	return 0;

}

 