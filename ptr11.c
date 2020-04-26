#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a[100], *ptr = a, *p = a;

	while(1)
	{
	    scanf("%c",ptr);
		if(*ptr=='\n')
            break;
		ptr++;
	}
	ptr--;
	while(*ptr!=*p)
	{
		printf("%c", *ptr);
		ptr--;
	}
	printf("%c",*p);
}
