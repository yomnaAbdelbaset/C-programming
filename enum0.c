#include<stdio.h>
typedef enum{
    jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
}months;

void MonthsOfYear(months m);
int main()
{
int x;
scanf("%d",&x);
MonthsOfYear(x);
}

void MonthsOfYear(months m)
{
   if(m==jan)
   {
       printf("Jan = %d",jan);
   }
   else if(m==feb)
   {
       printf("Feb = %d",feb);
   }
    else if(m==mar)
   {
       printf("Mar = %d",mar);
   }
    else if(m==apr)
   {
       printf("Apr = %d",apr);
   }
    else if(m==may)
   {
       printf("May = %d",may);
   }
    else if(m==jun)
   {
       printf("Jun = %d",jun);
   }
    else if(m==jul)
   {
       printf("Jul = %d",jul);
   }
    else if(m==aug)
   {
       printf("Aug = %d",aug);
   }
    else if(m==sep)
   {
       printf("Sep = %d",sep);
   }
    else if(m==oct)
   {
       printf("Oct = %d",oct);
   }
    else if(m==nov)
   {
       printf("Nov = %d",nov);
   }
    else if(m==dec)
   {
       printf("Dec = %d",dec);
   }
}