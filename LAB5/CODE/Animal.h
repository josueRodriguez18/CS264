#include <iostream>

using namespace std;

class Animal{
    protected:
        string animalCategory, animalSound;

    public:
        Animal(){ animalCategory = "undefined"; animalSound = "undefined";}
        Animal(string c, string s){ animalCategory = c, animalSound = s;}
        void setCategory(string c){ animalCategory = c;}
        void setSound( string s ){ animalSound = s; }
        string getCategory(){ return animalCategory;}
        string getSound(){ return animalSound; }

        virtual void describeIdentity(){ cout << "\nI am a simple animal";}
        



};


class Horse : public Animal{ 
    public:
        Horse():Animal(){};
        Horse(string c, string s): Animal(c, s){};
        void describeIdentity(){ cout << "\nI am a simple Horse";}
};

class Mouse: public Animal{
    public:
        Mouse():Animal(){};
        Mouse(string c, string s): Animal(c, s){};
        void describeIdentity(){ cout << "\nI am a simple Mouse";}
};

class Dog: public Animal{
        int numDogBiscuitsEaten;
        public:
            Dog():Animal(){ numDogBiscuitsEaten = 0;};
            Dog(string c, string s): Animal(c, s){ numDogBiscuitsEaten = 0; };

            int getBiscuits(){ return numDogBiscuitsEaten;}
            void eatDogBiscuit(){ numDogBiscuitsEaten++;}
            void describeIdentity(){ cout << "\nI am a simple Dog";}
};

class Cat: public Animal{
        public:
        Cat():Animal(){};
        Cat(string c, string s): Animal(c, s){};
        void describeIdentity(){ cout << "\nI am a simple Cat";}
};

class Tiger: public Animal{
    public:
        Tiger():Animal(){};
        Tiger(string c, string s): Animal(c, s){};
        void describeIdentity(){ cout << "\nI am a simple Tiger";}
};