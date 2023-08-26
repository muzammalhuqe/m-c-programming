#include<stdio.h>
int main ()
{
    int x=100;
    int * ptr= &x;
    // x=500;
    *ptr= 300;
    printf("x er value - %d\n",x);
    printf("ptr er value - %d\n",*ptr);







    // printf("x er address - %p\n",&x);
    // printf("ptr er value - %p\n",ptr);
    // printf("ptr er address - %p\n",&ptr);
    return 0;
}