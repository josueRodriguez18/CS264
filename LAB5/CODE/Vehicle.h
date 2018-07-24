#include<iostream>

using namespace std;

class Vehicle{
	protected:
		int doors, cylinders;
		string color; double fuelLevel, transmission;
	public:
		Vehicle(int d, int c, string co, double f, double t){ doors = d; cylinders = c; color = c; fuelLevel = f; transmission = t;}
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



};

class Taxi : Vehicle{
	bool passeng;
	
	public: 
		Taxi(bool p, int d, int c, string co, double f, double t): Vehicle(d, c, co, f, t) { passeng = p; };
		void setPasseng(bool p){ passeng = p;}
		bool getPasseng(){ return p; }
	
	
};

class Truck : Vehicle{
	bool cargo;
	
	public:
		Truck(bool p, int d, int c, string co, double f, double t): Vehicle(d, c, co, f, t) { cargo = p; };
	
	
};