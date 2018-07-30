#include<iostream>
#include"Vehicle.h"


int main(){
    Taxi taxi1(1, 4, 6, "yellow", 12.0, 6.0) ; Truck truck1(1,2,12,"blue", 15, 8); Vehicle V1(4, 6, "Orange", 18, 18);

    cout << "Vehicle: " << endl;
    V1.printAll();

    cout << "Taxi: " << endl;

    taxi1.printAll(); 
    if(taxi1.getPasseng()){
        cout << "\nThe taxi currently has passengers";
    }
    else{
        cout << "\nThe taxi currently has no passengers";
    }

    cout << "\nTruck: "<< endl;
    truck1.printAll();
    if(truck1.getCargo()){
        cout << "\nThe truck currently has cargo";
    }
    else{
        cout << "\nThe truck currently has no cargo";
    }


    return 0;
}