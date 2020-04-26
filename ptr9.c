#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a[100], *ptr = a,b[100],*p=b;
	scanf("%s%s",&a,&b);
	int f=1;
	while(*ptr!='\0')
    {
        if(*ptr!=*p)
        {
            f=0;
            break;
        }
        p++;
        ptr++;
    }
	if(f)
    {
        printf("Both strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }
}
