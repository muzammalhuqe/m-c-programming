#include<stdio.h>
int main ()
{
    // char a[8]={'m','u','z','a','m','m','e','l'};
    char a[]="muzammel";
    int sz=sizeof (a)/ sizeof (char);
    printf("%d\n", sz);
    printf("%s",a);
    // for( int i=0; i<8; i++)
    // {
    //     printf("%c\n",a[i]);
    // }
    return 0;
}