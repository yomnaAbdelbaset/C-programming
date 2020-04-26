#include<stdio.h>
#include<math.h>

struct maxMin
{
    int max,min;
};

typedef struct maxMin st;
st mxMn(int a[],int n)
{
    st x;
    x.min=1e5,x.max=-1;
    for(int i=0; i<n; i++)
    {

        if(a[i]<x.min)
        {
            x.min=a[i];
        }
        if(a[i]>x.max)
        {
            x.max=a[i];
        }
    }
    return x;
}

int main()
{

    int n,a[30];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    st x;
    x=mxMn(a,n);
    printf("Max is : %d\nMin is : %d",x.max,x.min);
}

