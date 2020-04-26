#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void armstrong(int n)
{
	int n_digits = log10(n)+1, x = n, sum = 0;

	while (n > 0)
	{
		sum += pow((n % 10), n_digits);
		n /= 10;
	}
	if (sum == x)
	{
		printf("%d is Armstrong number\n",x);
	}
	else
	{
		printf("%d is not an Armstong number\n",x);
	}
}
void main()
{
	int n;
	printf("Input a number: \n");
	scanf("%d", &n);
	armstrong(n);

}