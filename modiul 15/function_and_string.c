#include<stdio.h>
#include<string.h>
void fun(char a[])
{
    printf("%d\n",strlen(a));
}
int main ()
{
    char a[10]="Hello";
    fun(a);
    return 0;
}