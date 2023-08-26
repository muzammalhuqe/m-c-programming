#include<stdio.h>
#include<string.h>
int main ()
{
    int n;
    char c[101];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",&c);
        int i = strlen(c);
        if (i>10)
        {
            printf("%c%d%c\n",c[0], i-2, c[i-1]);
        }
        else printf("%s\n",c);
    }
    return 0;
}