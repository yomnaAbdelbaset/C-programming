#include<stdio.h>
struct sum
{
int real;
float img;
}num1,num2,sum;


int main()
{

scanf("%d%f%d%f",&num1.real,&num1.img,&num2.real,&num2.img);
sum.real=num1.real+num2.real;
sum.img=num1.img+num2.img;

printf("Sum = %d + %.1f", sum.real, sum.img);
}

