#include<stdio.h>
int fun(char ar[], int n)
{
    if(ar[n]=='\0') return 0;
    int len = fun(ar,n+1);
    return len+1;
}
int main ()
{
    char ar[101]="md_muzammel_haque";
    int lenth = fun(ar,0);
    printf("%d\n",lenth);
    return 0;
}