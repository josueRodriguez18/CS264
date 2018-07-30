#include<iostream>
#include "Racecar.h"

using namespace std;

int main(){
    Racecar f1(6, 1, "Coke", "Ferrari", "Red", 250, 10);

    cout << "Car: " << f1.getName() << " is " << f1.getColor();
    cout << " and has a " << f1.getEngineValves() << "-valve engine. MAX SPEED = " << f1.getMaxSpeed() << " mph\n";
    return 0;
}