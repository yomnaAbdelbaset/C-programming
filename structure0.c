#include<stdio.h>
struct distance
{
int feet;
float inch;
}distance1,distance2,sumOfDistance;


int main()
{

scanf("%d%f%d%f",&distance1.feet,&distance1.inch,&distance2.feet,&distance2.inch);
sumOfDistance.feet=distance1.feet+distance2.feet;
sumOfDistance.inch=distance1.inch+distance2.inch;

if(sumOfDistance.inch>12)
{
    sumOfDistance.inch-=12;
    sumOfDistance.feet+=1;
}
printf("Sum of distance : %d - %f", sumOfDistance.feet, sumOfDistance.inch);
}

