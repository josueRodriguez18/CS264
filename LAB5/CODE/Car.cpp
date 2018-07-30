#include<iostream>
#include "Car.h"



void Car::setMaxSpeed(int x){ maxSpeed = x;};
int Car:: getMaxSpeed() const { return maxSpeed; };
void Car::setEngineValves(int x){ engineValves = x; };
int Car::getEngineValves() const { return engineValves;};
string Car::getColor() const { return color; };
string Car::getName() const { return name; }




