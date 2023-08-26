#include<stdio.h>
// global
int x=500;
void fun(void)
{
    printf("%d\n",x);
    // printf("fun er s er address - %p\n",&s);
}
int main ()
{
    
    // printf("Main er s er address - %p\n",&s);
    printf("%d\n",x);
    fun();
    return 0;
}