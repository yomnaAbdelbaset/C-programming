#include"declarations.c"

int RemoveLastCustomer(struct myCenter *center)
{
    struct Customer *temp = center->firstCustomer,*prev; // Pointer points at the first customer

    if (center->numOfCustomers == 0) // If there's no customers yet
    {
        printf("List is already empty!\n");
        return 0; // To know that there is no customers in the main function
    }
    else if (center->numOfCustomers == 1) // If there's only one customer
    {
        free(temp); // Remove first customer because there's no one except him
        printf("Last Customer deleted successfully!\n");
        center->numOfCustomers--; // Decrease number of customers
        center->firstCustomer = NULL; // Make first customer points at NULL
        return 1;
    }
    else // If there's any number of customers
    {

       while(temp->next!=NULL) // To reach the customer that before the last customer
       {
           prev=temp; //Hold the address of the customer that before the last customer
           temp=temp->next; //Move to the next customer
       }
       free(temp); //Delete the last customer
       printf("Last Customer deleted successfully!\n");
       center->numOfCustomers--; //Decrease the number of customers by 1
       prev->next=NULL; //Make the customer that before the last customer point at NULL as now he is the last customer
       return 1;
    }
}

