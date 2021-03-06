#include<iostream>


using namespace std;

class Car{ 
    
    public:
    
        Car( string n, string c, int ms, int eV ){
            name = n; color = c; maxSpeed = ms; engineValves = eV;
        }
        void setMaxSpeed( int x);
        int getMaxSpeed() const;

        void setEngineValves( int x );
        int getEngineValves() const;

        string getColor() const;
        string getName() const;

    void print() const;

    private:
        int maxSpeed;
        int engineValves;
        string color;
        string name;


};