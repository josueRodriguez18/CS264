#include<iostream>

using namespace std;

class Dog{
	string breed;
	bool isDangerous;
	int age;
	
	public:
		Dog(string Breed, bool dang, int old){ breed = Breed; isDangerous = dang; age = old;}
		string getBreed();
		bool getDanger();
		int getAge();
		void setBreed(string a);
		void setAge(int a);
		void setDanger(bool t);
		void bark();
};		
