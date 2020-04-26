#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, a[100], *ptr = a;
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d", ptr);
		ptr++;
	}
	ptr--;
	for (int i = 0; i<n; i++)
	{
		printf("%d ", *ptr);
		ptr--;
	}
}
