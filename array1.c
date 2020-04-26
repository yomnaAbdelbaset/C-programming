#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int arr[10];
void main()
{
	int sz1, arr_1[10], sz2, arr_2[10];
	printf("Enter the size of array_1: ");
	scanf("%d", &sz1);
	printf("Enter the Elements of array_2: \n");

	int j = 0;
	for (int i = 0; i < sz1; i++, j++)
	{
		printf("Enter element_%d: ", i + 1);
		scanf("%d", &arr_1[i]);
		arr[j] += arr_1[i];

	}
	printf("Enter the size of array_2: ");
	scanf("%d", &sz2);
	printf("Enter the Elements of array_2: \n");

	for (int i = 0; i < sz2; i++, j++)
	{
		printf("Enter element_%d: ", i + 1);


		scanf("%d", &arr_2[i]);
		arr[j] += arr_2[i];
	}
	for (int i = 0; i < j; i++)
	{
		for (int k = 0; k < j; k++)
		{
			if (arr[i] < arr[k])
			{
				int t = arr[k];
				arr[k] = arr[i];
				arr[i] = t;
			}
		}
	}
	if (j & 1)
	{
		printf("Median is %d\n", arr[j / 2]);
	}
	else {
		printf("Median is %.2f\n", ((arr[j / 2] + arr[(j / 2) - 1])*1.0) / 2);
	}
}
