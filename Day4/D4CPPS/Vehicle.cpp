#include <iostream> 
using namespace std; 
 
// Declare the Vehicle class. 
class Vehicle {  
  private:
	int value; //adding a private member to Vehicle
	
  public:
	 // number of passengers  
	int passengers;
	int mpg;        // fuel consumption in miles per gallon 
	int fuelcap;    // fuel capacity in gallons 
	
	//gets private value
	int getValue();
	void setValue(int val);
	int getPasseng();
	void setPasseng(int val);
	

  int range();   // compute and return the range 
  Vehicle(int passeng, int milesper, int cap){
	  passengers = passeng; mpg = milesper; fuelcap = cap;
	  
  }
  
  Vehicle(){
	  passengers = 0; mpg = 0; fuelcap = 0;
	}
	
	~Vehicle(){
		cout << " Deconstructing ";
		
	}
}; 

void Vehicle::setPasseng(int val){
	passengers = val;
}

int Vehicle::getPasseng(){
	return passengers;
}

int Vehicle::getValue(){
		return value;
	}
void Vehicle::setValue(int val){
		value = val;
	}
 
 //passes object by reference for changing
 void changeVehicle(Vehicle &obj){
	 //changes the members
	 obj.mpg = 1;
	 obj.fuelcap = 6;
 }
// Implement the range member function.  
int Vehicle::range() { 
  return mpg * fuelcap; 
} 
 
int main() {  
 Vehicle sportscar(10,15,20);
 Vehicle minivan;
 cout << sportscar.getPasseng() << " " << minivan.getPasseng();
  return 0; 
}
