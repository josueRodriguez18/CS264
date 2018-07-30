#include<iostream>

using namespace std;

class Car{ 
    
    public:
    
        Car( string n, string c );
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