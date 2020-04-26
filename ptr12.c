#include <stdio.h>
#include <stdlib.h>
int *mx_add=NULL,*mn_add=NULL;
void min_max(int a[],int n)
{
    int *ptr=a;
    int mx=*ptr,mn=*ptr;

   for(int i=0;i<n;i++)
    {
        if(*ptr>mx)
        {
            mx=*ptr;
        }
        if(*ptr<mn)
        {
            mn=*ptr;
        }
        ptr++;
    }
  mx_add=&mx;
  mn_add=&mn;
}
int main()
{
	int n, a[100], *ptr = a;
scanf("%d",&n);
	for(int i=0;i<n;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr=a;
	min_max(a,n);
	printf("%d %d",*mx_add,*mn_add);
}
