#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	int arr_1[20], arr_2[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr_1[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr_2[i]);
	}
	for (int i = 19; i >= 0; i--)
	{
		if (i & 1)
		{
			arr_1[i] = arr_2[(i / 2)];
		}
		else
		{
			arr_1[i] = arr_1[i / 2];
		}

	}
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", arr_1[i]);
	}
	printf("\n");
	
}
