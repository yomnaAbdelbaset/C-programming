#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, a[100], *ptr = a, x;
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d", ptr);
		ptr++;
	}
	ptr = a;
	scanf("%d", &x);
	int *x_ptr = &x;
	for (int i = 0; i<n; i++)
	{
		if (*ptr == *x_ptr)
		{
			printf("%d is found in position %d\n", *x_ptr, i + 1);
			break;
		}
		ptr++;
	}
}
