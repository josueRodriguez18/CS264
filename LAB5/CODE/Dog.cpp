#include "Dog.h"
#include<iostream>

using namespace std;

string Dog::getBreed(){ return breed; }
bool Dog::getDanger(){ return isDangerous; }
int Dog::getAge(){ return age; }
void Dog::setBreed(string a){ breed = a; }
void Dog::setAge(int a){ age = a; }
void Dog::setDanger(bool t){ isDangerous = t; }
void Dog::bark(){ cout << "\nWoof! The dog has barked";}