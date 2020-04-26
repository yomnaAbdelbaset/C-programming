#include <stdio.h>
#include <stdlib.h>
int freq[100]; //assuming numbers are from 1 to 100
int main()
{
   int n,a[100],*ptr=a,*f=freq;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%d",ptr);
       freq[*ptr]++;
       ptr++;
   }
  ptr=a;

for(int i=1;i<=100;i++,f++)
  {
      if((*f)>1)
      printf("this number %d is repeated %d times",i-1,*f);

  }
}
