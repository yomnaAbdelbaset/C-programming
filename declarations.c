
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stddef.h>


//Global Variables
int ID;
struct myCenter we;


//struct definition
struct Customer
{
    int id;
    char name[20];
    struct Customer *next;
};


extern struct myCenter
{
    int numOfCustomers;
    struct Customer *firstCustomer;
    struct Customer *lastCustomer;
};

//functions declarations
void AddCustomer(struct myCenter *center, int CustomerId);
int RemoveFirstCustomer(struct myCenter *center);
void AddFirstCustomer(struct myCenter *center);
int FindCustomer(struct myCenter *center, char name[30]);
int RemoveLastCustomer(struct myCenter *center);
void DisplayCustomers(struct myCenter *center);
void Menu();
