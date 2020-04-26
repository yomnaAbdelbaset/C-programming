#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

void main()
{

	int a[11];
	printf("Enter 10 elements array: ");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("Enter number of times to left rotate: ");
	int n;
	scanf("%d", &n);

	printf("Array before rotation: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	for (int j = 0; j < n; j++)
	{
		int t = a[0];
		printf("%d ", a[0]);
		for (int i = 0; i < 9; i++)
		{
			a[i] = a[i + 1];
		}
		a[9] = t;
	} 
	printf("Array after rotation: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

}