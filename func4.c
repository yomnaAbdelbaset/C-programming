#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fact(int n)
{
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}
	return f;
}
int nCr(int n, int r)
{
	return fact(n) / (fact(r)*fact(n - r));
}
int nPr(int n, int r)
{
	return fact(n) / fact(n - r);
}
void main()
{
	int n, r;
	printf("Enter the value of n and r: \n");
	scanf("%d%d", &n, &r);
	printf("%dC%d = %d\n", n, r, nCr(n, r));
	printf("%dP%d = %d\n", n, r, nPr(n, r));

}