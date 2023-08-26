#include<stdio.h>
void fun (int *p)
{
    *p= 500;
    printf("%d\n",*p);
}
int main ()
{
    int x= 50;
    fun(&x);
    printf("%d\n",x);
    return 0;
}