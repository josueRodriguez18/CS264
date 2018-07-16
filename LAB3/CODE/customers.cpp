#include<iostream>
#include "customers.h"

using namespace std;

void insertName(customers *head, string tempName){
    customers *temp = new customers; customers *cur = new customers;
    temp = head; cur->name = tempName; cur->next = NULL;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = cur;
}

int currentLength(customers *head){
    int counter; customers *temp = new customers;
    temp = head;
    while(temp->next != NULL){
        counter++;
        temp = temp->next;
    }
    return counter;

}

void printCustomers(customers *head){
    customers *temp = head;
    while(temp->next != NULL){
        cout << endl << temp->name;
        temp = temp->next;
    }
    cout << endl << temp->name;

}