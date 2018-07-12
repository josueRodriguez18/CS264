#include<iostream>


using namespace std;


class Dog{
	
	string breed;
	bool isDangerous;
	int age;
	public:
		void setBreed(string x){ breed = x; };
		void setDang(bool x){ isDangerous = x; };
		void setAge(int x){ age = x;  };
		void bark();
		
		string getBreed(){ return breed;}
		bool getDang(){ return isDangerous; }
		int getAge(){ return age; }
	
		Dog(string type, bool Dang, int old){
			breed = type; isDangerous = Dang; age = old;
		}
		
		~Dog(){
			cout << " \nThey ran away ";
		}
	
};

void Dog::bark(){
	cout << "Woof! The dog has barked " << endl;
}


int main(){
	Dog Max("Terrier", 0, 3); Dog Buster("Pitbull", 1, 2);
	Max.bark(); Buster.bark();
	
	cout << "Max is a: " << Max.getBreed();
	cout << "\nBuster is a: " << Buster.getBreed();

	return 0;
}