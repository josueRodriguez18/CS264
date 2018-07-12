#include<iostream>


using namespace std;

struct customers{
	string name;
    customers *next = NULL;

    void print_customers(customers *head);
	customers* createList(string name);
	void insertName(customers *head, string name);
	int currentLength(customers *head);

};

   /*  customers::void print_customers(customers *head);
	customers::customers* createList(string name);
	customers::void insertName(customers *head, string name);
	customers::int currentLength(customers *head); */
	
	