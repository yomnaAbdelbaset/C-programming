#include"declarations.c"

int FindCustomer(struct myCenter *center, char name[30])
{

    struct Customer *temp = center->firstCustomer; // Pointer points at the first customer

    if (center->numOfCustomers != 0) // Check if there's customer or not
    {

        while (temp!= NULL || center->numOfCustomers == 1) // While we haven't reach the end of the list or in case if number of customers is 1
        {

            if (strcmp(name,temp->name) == 0) // If the name we want equals the name we're searching for
            {
                printf("Customer Founded successfully and the ID is %d!\n",temp->id);
                return 1;

            }
            temp = temp->next; // Go to the next customer in the list
        }
        return 0; // If the customer wasn't found

    }
}


