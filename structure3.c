#include<stdio.h>
#include<math.h>

struct stores
{
char name[50];
float price;
int quant;
};

typedef struct stores st; 

st func(st prod,int price_inc, int quan_inc);

int main()
{
    st prod={"XYZ",25.75,12};
    int price_inc,quan_inc;
    
    printf("Input price increment : "); //price increment
    scanf("%d",&price_inc);

    printf("Input quantity increment : "); //quantity increment
    scanf("%d",&quan_inc);

    prod=func(prod,price_inc,quan_inc); //changing the value of struct called prod

    printf("Value of the item = %f\n", prod.price*prod.quant);
}

st func(st prod,int price_inc, int quan_inc)  //function of return type struct
{
    prod.price+=price_inc;
    prod.quant+=quan_inc;
 
    return prod;

}
