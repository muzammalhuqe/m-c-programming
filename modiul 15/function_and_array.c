#include<stdio.h>
void fun(int a[],int s)
{
    for (int i=0;i<s;i++)
    printf("%d ",a[i]);
}
int main ()
{
    int a[5]={10,20,30,40,50};
    fun(a,5);
    return 0;
}