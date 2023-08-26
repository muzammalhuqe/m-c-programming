// #include<stdio.h>
// int main ()
// {
//     char ch[1005];
//     int small =0 , capital = 0;
//     for(int i=0;i<ch;i++)
//     {
//         // fgets(ch,1005,stdin);
//         scanf("%s",ch);

//         if(ch[i]>= 'A' || ch[i]<= 'Z')
//         {
//             capital++;
//         }
//         if(ch[i]>= 'a' || ch[i] <= 'z')
//         {
//             small++;
//         }
//         printf("\n");
//     }
//     printf("%d %d %d",small,capital);
//     // printf("Capital -%d\n Small -%d\n Spaces -\n",capital,small,space);
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main ()
{
    char c[1001];
    fgets(c,1001,stdin);
    int size = strlen(c);
    int capital = 0, small = 0, space = 0;
    for(int i=0;i<size;i++)
    {
        if(c[i] >= 'A' && c[i] <= 'Z')
        {
            capital++;
        }
        if(c[i] >= 'a' && c[i] <= 'z')
        {
            small++;
        }
        if(c[i]==' ')
        {
            space++;
        }
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d\n",capital,small,space);
    return 0; 
}