#include"customers.h"
#include<iostream>

using namespace std;

int main(){
    string temp;
    customers *first = new customers;
    cout << "Please enter the first customer \n";
    cin >> temp;
    first->name = temp;
    while(temp != "end"){
        insertName(first, temp);
        cout << "Please enter the next customer\n";
        cin >> temp;
    }
    cout << "\nNumber of customers: " << currentLength(first);
    cout << "\nCustomers: "; printCustomers(first);



    return 0;
}