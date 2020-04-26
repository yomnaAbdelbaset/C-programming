#include<stdio.h>
#include<math.h>
struct DifferenceBetweenTime
{
int hrs,min,sec;
}time1,time2,time3;


int main()
{

printf("Enter First time in hours, minutes and seconds respectively: ");
scanf("%d%d%d",&time1.hrs,&time1.min,&time1.sec);
printf("Enter Second time in hours, minutes and seconds respectively: ");
scanf("%d%d%d",&time2.hrs,&time2.min,&time2.sec);

int total1=time1.hrs*60*60+time1.min*60+time1.sec; //convert time1 to seconds
int total2=time2.hrs*60*60+time2.min*60+time2.sec; //convert time2 to seconds

int dif = abs(total1-total2);

time3.hrs = dif/3600;
dif%=3600;

time3.min = dif/60;
dif%=60;

time3.sec= dif;

printf("Time difference = %d : %d : %d", time3.hrs, time3.min,time3.sec);
}

