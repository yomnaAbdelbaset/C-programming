#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
	int n, a[100], *ptr = a, dif;
	scanf("%d", &n);
	for (int i = 0; i<n; i++, ptr++)
	{
		scanf("%d", ptr);
	}

	ptr = a;
	int mx = *ptr;
	int mn = *ptr;

	for (int i = 0; i<n; i++,ptr++)
	{
		if (*ptr>mx)
			mx = *ptr;
		if (*ptr<mn)
			mn = *ptr;
	}

	printf("%d", mx - mn);
}
