
#include"declarations.c"

void DisplayCustomers(struct myCenter *center)
{
    struct Customer *temp = center->firstCustomer;
    if (center->numOfCustomers == 0) // If there's no customers yet
    {
        printf("There's no customers to be displayed!\n");
    }
    else
    {
        printf("---------------------------------\n");
        printf("\tID\t\tName   \n---------------------------------\n");
        while (temp != NULL)
        {
            printf("|\t%d\t|\t%s\t|\n", temp->id, temp->name);
            temp = temp->next;
        }
        printf("---------------------------------\n");
    }
}
