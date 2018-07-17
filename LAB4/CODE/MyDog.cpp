#include<iostream>
#include<cstring>
using namespace std;

class Dog{
	string breed;
	bool isDangerous;
	int age;
	
	public:
		Dog(string Breed, bool dang, int old){ breed = Breed; isDangerous = dang; age = old;}
		string getBreed(){ return breed; }
		bool getDanger(){ return isDangerous; }
		int getAge(){ return age; }
		void setBreed(string a){ breed = a; }
		void setAge(int a){ age = a; }
		void setDanger(bool t){ isDangerous = t; }
		void bark(){ cout << "\nWoof! The dog has barked";}
};		

int main(){
	Dog d1("Terrier", 0, 3), d2("Rottweiler" , 1, 4);
	
	d1.bark(); d2.bark();
	
	cout << "\nDog 1: " << d1.getBreed() << "\nAge: " << d1.getAge() << "\nDangerous?" << d1.getDanger(); 
	
	cout << "\nDog 1: " << d2.getBreed() << "\nAge: " << d2.getAge() << "\nDangerous?" << d2.getDanger(); 
	
	
	
	
	return 0;
}