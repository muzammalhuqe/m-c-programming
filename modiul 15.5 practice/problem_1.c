#include<stdio.h>
int my_abs(int n)
{
    if(n < 0)
    {
        n = n * -1;
    }
    else
    {
        n = n;
    }
    return n;
}
int main ()
{
    int n;
    scanf("%d", &n);
    int result = my_abs(n);
    printf("%d\n",result);
    return 0;
}