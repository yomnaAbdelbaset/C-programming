#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	int a[11];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	int n;
	scanf("%d", &n);
	for (int j = 0; j < n; j++)
	{

		int t = a[9];
		for (int i = 9; i >= 0; i--)
		{
			a[i] = a[i - 1];
		}
		a[0] = t;
	}
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}



