#include<iostream>


using namespace std;

struct customers{
    public:
	string name;
    customers *next;

    void print_customers(customers *head);
	customers* createList(string name);
	void insertName(customers *head, string name);
	int currentLength(customers *head);

};

   /*  customers::void print_customers(customers *head);
	customers::customers* createList(string name);
	customers::void insertName(customers *head, string name);
	customers::int currentLength(customers *head); */
	
	