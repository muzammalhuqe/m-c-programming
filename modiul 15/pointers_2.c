#include<stdio.h>
int main ()
{
    double x = 5.52;
    double * ptr = &x;
    double * ptr2 = ptr;
    *ptr2 = 100.50;
    // *ptr= 10.20;

    printf("x er value - %0.2lf\n",x);
    printf("ptr er value - %0.2lf\n",*ptr);
    printf("ptr er value - %0.2lf\n",*ptr2);
   
    return 0;
}