#include<iostream>
#include "Car.h"

Car::Car(string n, string c){
    name = n; color = c;
}

void Car::setMaxSpeed(int x){ maxSpeed = x;};
int Car:: getMaxSpeed() const { return maxSpeed; };
void Car::setEngineValves(int x){ engineValves = x; };
int Car::getEngineValves() const { return engineValves;};
string Car::getColor() const { return color; };
string Car::getName() const { return name; }




