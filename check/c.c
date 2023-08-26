// #include<stdio.h>
// int main ()
// {
//     int i = 10;
// while (i >= 0) {
//     printf("%d ", i);
//     i -= 2;
// }
//     return 0;
// }

#include<stdio.h>
void fun(int n, int i)
{
    if(i==n+1) return;
    fun(n,i+1);
    printf("%d",i);
    if(i==1)
    {
       return;
    }
    else
    {
        printf(" ");
    }
}
int main ()
{
    int n;
    scanf("%d",&n);
    fun(n,1);
    return 0;
}