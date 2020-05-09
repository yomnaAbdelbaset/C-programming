
#include"declarations.c"

void AddFirstCustomer(struct myCenter *center)
{
    struct Customer *newCustomer = (struct Customer *)malloc(sizeof(struct Customer));// Construct a place in memory that have the struct size

    if (center->numOfCustomers == 0) // If there's no customers yet
    {
        center->firstCustomer = newCustomer; // First customer pointer points at the new customer
        center->lastCustomer->next = NULL; // Make the next pointer point at NULL
    }

    newCustomer->next = center->firstCustomer; // Make the next pointer points at the customer who was first before we put the new customer
    center->firstCustomer = newCustomer; // Make the first customer pointer points at the new customer
    printf("Please enter the name of the customer you want to add first: \n");
    scanf("%s", &newCustomer->name);

    newCustomer->id = ID++; //Assign the ID of the new customer
    center->numOfCustomers++; //Increase the number of customers
}
