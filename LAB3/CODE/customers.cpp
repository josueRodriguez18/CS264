#include<iostream>
using namespace std;

struct customer{
    string name;
    customer *next;

    void print_customers(customer &head){
        customer *cur = &head;
            while( cur != NULL){
                cout << cur->name << endl;
                cur = cur->next;
            }

    }

}