#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, a[100], *ptr = a, cpy[100], *p = cpy;
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d", ptr);
		cpy[i] = *ptr;
		ptr++;
	}
	ptr = a;

	for (int i = 0; i<n; i++)
	{

		printf("%d", *ptr);
	}
}
