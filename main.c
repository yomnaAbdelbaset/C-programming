#include"declarations.c"

int main()
{
    we.numOfCustomers = 0; //initialize number of customers to be 0 at first
    we.firstCustomer = NULL; //Make first customer pointer point at NULL at first
    we.lastCustomer = NULL; //Make first customer pointer point at NULL at first

    int option = -1;

    while (option != 7) //7 set to exit the program
    {
        Menu();
        char answer='y';
        scanf("%d", &option);

        if(option>7||option<1) //special case
            printf("Please Enter valid number\n");

        if (option == 1) //Add Customers
        {
            while (answer == 'y')
            {
                AddCustomer(&we, ID++);
                printf("Do you want to add another customer?\nIf yes type y, else type n: \n");
                scanf(" %c", &answer);
            }

            if(answer!='y'&&answer!='n')
            {
                printf("Please enter y or n ONLY!\n");
            }
        }
        else if (option == 2)
        {
            while (answer == 'y')
            {
                if(!(RemoveFirstCustomer(&we))) // If there's already customers
                {
                    printf("Do you want to delete another first customer?\nIf yes type y, else type n: \n");
                    scanf(" %c", &answer);
                }
                else //if there's no customers yet
                {
                    break;
                }
            }
            if(answer!='y'&&answer!='n')
            {
                printf("Please enter y or n ONLY!\n");

            }
        }
        else if (option == 3)
        {

            while (answer == 'y')
            {
                AddFirstCustomer(&we);
                printf("Do you want to add another first customer?\nIf yes type y, else type n: \n");
                scanf(" %c", &answer);
            }
            if(answer!='y'&&answer!='n')
            {
                printf("Please enter y or n ONLY!\n");
            }
        }
        else if (option == 4)
        {

            while (answer == 'y')
            {
                char name[30];
                if(we.numOfCustomers != 0) // if there's already customers
                {
                    printf("Please enter the name of the customer you are searching for: \n");
                }
                else //if there's no customers yet
                {
                    printf("There's no customers!\n");
                    break;
                }
                scanf("%s", &name);

                if (FindCustomer(&we, name) == 1) // if customer exist
                {
                    printf("Do you want to find another customer?\nIf yes type y, else type n: \n");
                    scanf(" %c", &answer);
                }
                else  //if customer doesn't exist
                {
                    printf("Customer doesn't exist!\n");
                    printf("Do you want to find another customer?\nIf yes type y, else type n: \n");
                    scanf(" %c", &answer);
                }
            }
            if(answer!='y'&&answer!='n')
            {
                printf("Please enter y or n ONLY!\n");
            }
        }
        else if (option == 5)
        {

            while (answer == 'y')
            {
                if(!(RemoveLastCustomer(&we)))  //if there's no customers yet
                {
                    break;
                }
                else  // If there's already customers
                {
                    printf("Do you want to delete another last customer?\nIf yes type y, else type n: \n");
                    scanf(" %c", &answer);
                }
            }
            if(answer!='y'&&answer!='n')
            {
                printf("Please enter y or n ONLY!\n");
            }
        }
        else if (option == 6)
        {
            DisplayCustomers(&we);
        }
    }
}
