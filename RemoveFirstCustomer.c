
#include"declarations.c"

int RemoveFirstCustomer(struct myCenter *center)
{
    struct Customer *temp = center->firstCustomer; // Pointer points at the first customer

    if (center->numOfCustomers > 0) // Make sure that there's customers
    {

        free(temp); // Delete first node
        center->firstCustomer = temp->next; // Make first customer pointer point at the second customer
        printf("First customer deleted successfully.\n");
        center->numOfCustomers--; // Decrease number of customers by 1
        return 0; // To know if there is customers or not in the main function
    }
    else{ // If there is no customers yet
        printf("List is already empty!\n");
        return 1; // To know that list is empty
    }
}
