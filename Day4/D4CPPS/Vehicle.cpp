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
 Vehicle sportscar;
 //setting sportscar members
 sportscar.mpg = 10; sportscar.fuelcap = 2; 
 
 sportscar.setValue(10);
 cout << endl << sportscar.getValue();
 
 //outputs members before the change function
 cout << " Mpg " << sportscar.mpg << " Fuelcap " << sportscar.fuelcap;
 changeVehicle(sportscar);  
 cout << " Mpg " << sportscar.mpg << " Fuelcap " << sportscar.fuelcap; 
  
  return 0; 
}
