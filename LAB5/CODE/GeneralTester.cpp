#include <iostream>
#include "Animal.h"

using namespace std;

int main(){
    Cat c1("Feline", "Meow"); Dog d1("Canine", "Bark"); Tiger t1("Big Cat", "Roar"), t2("Big Cat", "Roar");
    Mouse m1("Rodent", "Eek");

    cout << "\nCat sound: " << c1.getSound();
    cout << "\nTiger sound: " << t1.getSound();
    cout << "\nTiger sound: " << t2.getSound();
    cout << "\nTiger category: " << t2.getCategory();
    t2.setSound("purr");
    cout << "\nTiger sound: " << t2.getSound();
    d1.eatDogBiscuit();
    /*eatDogBiscuit function cannot be called on a cat object because
    the function is only for dogs even if they inherit the same animal class */

    cout << "\nDog Sound: " << d1.getSound();
    cout << "\nDog Category: " << d1.getCategory();
    cout << "\nDog biscuits: " << d1.getBiscuits();

    Animal *p[5];
    p[0] = new Mouse( "Rodent", "Eek");  
    p[1] = new Tiger("Big Cat", "Roar");  
    p[2] = new Dog("Canine", "Bark");  
    p[3] = new Horse("Equus", "Neigh");  
    p[4] = new Cat("Feline", "Meow"); 

    for(int i = 0; i < 5; i++){
        p[i]->describeIdentity();
    }
    



    return 0;
}