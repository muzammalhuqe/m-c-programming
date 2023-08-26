#include<stdio.h>
#include<string.h>
int main ()
{
    char a[15];
    fgets (a,19,stdin);
    a[9]='\0';
    
    printf("%s ",a);

    return 0;
}