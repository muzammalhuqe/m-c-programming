#include<stdio.h>
int main ()
{
    int ar[5]={5,10,15,20,25};
    // printf("0th index er address - %p\n",&ar[0]);
    // printf("0th index er address - %p\n",ar);
    // printf("0th index er value - %d\n",ar[0]);
    // printf("0th index er value - %d\n",*ar);
    // printf("0th index er value - %d\n",ar[3]);
    // printf("0th index er value - %d\n",*(ar+3));

    printf("%d\n",*(ar+1));
    printf("%d\n",*(1+ar));
    printf("%d\n",ar[1]);
    printf("%d\n",1[ar]);
    return 0;
}