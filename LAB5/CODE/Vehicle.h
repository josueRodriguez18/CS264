#include<iostream>

using namespace std;

class Vehicle{
	protected:
		int doors, cylinders;
		string color; double fuelLevel, transmission;
	public:
		Vehicle(int d, int c, string co, double f, double t){ doors = d; cylinders = c; color = co; fuelLevel = f; transmission = t;}
		void setDoors(int d){ doors = d; }
		void setCylinders(int c){ cylinders = c; }
		void setColor(string c){ color = c; }
		void setFuelLevel(double f){ fuelLevel = f; }
		void setTransmission(double t){ transmission = t; }
		
		int getDoors(){ return doors; }
		int getCylinders(){ return cylinders; }
		string getColor(){ return color; }
		double getFuelLevel(){ return fuelLevel; }
		double getTransmission(){ return transmission; }

		void printAll(){ 
			cout << "\nDoors: " << getDoors();
			cout << "\nCylinders: " << getCylinders();
			cout << "\nTransmission Type: " << getTransmission();
			cout << "\nColor: " << getColor();
			cout << "\nFuel Level: " << getFuelLevel();
		}



};

class Taxi : public Vehicle{
	bool passeng;
	
	public: 
		Taxi(bool p, int d, int c, string co, double f, double t): Vehicle(d, c, co, f, t) { passeng = p; };
		void setPasseng(bool p){ passeng = p;}
		bool getPasseng(){ return passeng; }
	
	
};

class Truck : public Vehicle{
	bool cargo;
	
	public:
		Truck(bool p, int d, int c, string co, double f, double t): Vehicle(d, c, co, f, t) { cargo = p; };
		void setCargo(bool c){ cargo = c;};
		bool getCargo(){ return cargo; };
	
	
};