#include<stdio.h>
int main ()
{
    float x, p;
    scanf("%f %f",&x,&p);
    float divide, totalPrice;
    divide=100 - x;
    totalPrice = ((100 / divide) * p);
    printf("%0.2f", totalPrice);
    return 0;
}