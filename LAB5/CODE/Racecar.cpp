#include "Car.h"
#include <iostream>

using namespace std;

class Racecar : public Car {
    int gearBox; bool para; string sponsor;

    public:
        Racecar(int g, bool p, string s, string n, string c): Car(n, c) {
            gearBox = g; para = p;
        }
        int getGear(){ return gearBox; }
        void setGear(int x){ gearBox = x;}
        bool getPara(){ return para; }
        void setPara( bool x ){ para = x;}
        string getSponsor(){ return sponsor;}
        void setSponsor( string x ){ sponsor = x; }



}