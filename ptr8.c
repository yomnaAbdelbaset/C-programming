#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a[100], *ptr = a;
	int c=0;
	scanf("%s",&a);
	while(*ptr!='\0')
    {
        c++;
        ptr++;
    }
	printf("%d",c);
}
