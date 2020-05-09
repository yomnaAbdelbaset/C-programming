#include"declarations.c"

void AddCustomer(struct myCenter *center, int CustomerId)
{

    struct Customer *newCustomer = (struct Customer *)malloc(sizeof(struct Customer)); // Construct a place in memory that have size same as struct size

    newCustomer->id = CustomerId; // Assign customer Id

    printf("Please enter customer name: \n");
    scanf("%s", &newCustomer->name); // Assign customer name

    if (center->firstCustomer == NULL) //If this customer is the first customer
    {
        center->firstCustomer = newCustomer; // Make pointer of first customer point at first customer
        center->lastCustomer = newCustomer; // Make pointer of last customer point at first customer since there's no one except him
    }
    else // If any customer (not the first customer)
    {
        center->lastCustomer->next = newCustomer;
        center->lastCustomer = newCustomer;
    }

    center->numOfCustomers++; // Increase number of customers
    newCustomer->next = NULL; // Make next node point at NULL
}
