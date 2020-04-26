#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void power(int n,int p)
{
	int res = 1;
	for (int i = 0; i < p; i++)
	{
		res *= n;
	}
	printf("%d to the power %d = %f\n", n,p,res*1.0)
	printf("%d to the power -%d = %f\n", n, p, 1.0 / res);

}
void main()
{
	int n, p;
	printf("Enter value of number: \n");
	scanf("%d", &n);
	printf("Enter the power: \n");
	scanf("%d", &p);
	power(n, p);

}