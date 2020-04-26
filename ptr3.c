#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	char* ptr = a, a[100];
	scanf("%d", &n);
	scanf("%s", &a);
	for (int i = 0; i<n; i++)
	{
		if (*ptr >= 65 && *ptr <= 90)
		{
			*(ptr) += 32;
			printf("%c", *ptr);
		}
		else if (*ptr >= 97 && *ptr <= 122)
		{
			*(ptr) -= 32;
			printf("%c", *ptr);
		}
		ptr++;
	}

}
