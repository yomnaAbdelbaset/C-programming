#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void primes(int l,int u)
{
	printf("Numbers from %d to %d are: ");
	for (int i = l; i <= u; i++)
	{
		int f = 1;
		for (int j = 2; j*j <= i; j++)
		{
			if (i%j == 0)
			{
				f = 0;
				break;
			}
		}

		if (f)
		{
			printf("%d ", i);

		}
	}
	printf("\n");
}
void main()
{
	int l, u;
	printf("Enter the lower and upper limit to list primes: \n");
	scanf("%d%d", &l, &u);
	primes(l, u);

}