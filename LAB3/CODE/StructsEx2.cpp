#include<iostream>
#include "customers.h"

int main()
{
		customers customer1, customer2, customer3;
		customer1.next = &customer2;
		customer2.next = &customer3;
		customer3.next = NULL;
		customer1.name = "Jack";
		customer2.name = "Jane";
		customer3.name = "Joe";
		print_customers(customer1);
	return 0;
}
