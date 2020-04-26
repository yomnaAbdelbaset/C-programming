#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a[100], *ptr = a, cpy[100], *p = cpy;
	scanf("%s",&a);
	while(*ptr!='\0')
	{
		*p = *ptr;
		ptr++;
		p++;
	}
	p = cpy;

	while(*p!='\0')
	{
		printf("%c", *p);
		p++;
	}

}
