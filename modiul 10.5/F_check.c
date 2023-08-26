/*Date: 08.01.16
Problem: 71A - Way Too Long Words
*/
#include<stdio.h>
// #include<stdlib.h>
#include<string.h>
// #include<math.h>
// #include<ctype.h>


// int compare(const void *a, const void *b)
// {
//     return ( *(int*) a - *(int*) b);
// }

int main()
{

    char c[101];
    int n;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%s", &c);
        int l = strlen(c);
        if(l>10)
        {
            printf("%c%d%c\n", c[0], l-2, c[l-1]);
        }
        else printf("%s\n", c);
    }
    return 0;
}