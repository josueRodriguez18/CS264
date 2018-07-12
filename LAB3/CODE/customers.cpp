#include<iostream>
#include"customers.h"
using namespace std;



void customers::print_customers(customers *head){
    customers *cur = head;
        while( cur != NULL){
            cout << cur->name << endl;
            cur = cur->next;
        }

    }

customers* customers::createList(string name){
		customers *cur;
		cur->name = name;
		cur->next = NULL;
		return cur;
		
	}
void customers::insertName(customers *head, string name){
	customers *cur;
	cur->name = name;
	while(head->next != NULL){
		head = head->next;
	}
	head->next = cur;
	
}
int customers::currentLength(customers *head){
	int counter = 0;
	if(head->next == NULL){
		counter ++;
	}
	while(head->next != NULL){
		counter++;
		head = head->next;
	}
	return counter;
}



