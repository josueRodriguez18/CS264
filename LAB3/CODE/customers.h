#include<iostream>
using namespace std;

struct customers{
    string name;
    customers *next = NULL;
};

void insertName(customers *head, string tempName);
int currentLength(customers* head);
void printCustomers(customers *head);