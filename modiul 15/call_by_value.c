#include<stdio.h>
void fun (int x)
{
    // printf("fun er x er address - %p\n",&x);
    x=200;
}
int main ()
{
    int x=20;
    // printf("main er x er address - %p\n",&x);
    fun(x);
    printf("main er x er value - %d\n",x);
    return 0;
}