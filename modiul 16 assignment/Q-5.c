// #include<stdio.h>
// #include<string.h>
// void is_palindrome(char ar[])
// {
    
//     char s[10];
//     scanf("%s", s);
//     int sz = strlen(s);
//     int j, flag = 1;
//     for (int i=0,j=sz - 1;i<j; i++, j--) 
//     {
//         if (s[i] != s[j]) 
//         {
//             flag = 0;
//             break;
//         }
//     }
//     if (flag) 
//     {
//         printf("Palindrome");
//     } else 
//     {
//         printf("Not Palindrome");
//     }
// }

// int main() 
// { 
//     is_palindrome(10);
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int is_palindrome(char s[])
{
    int  i, j;
    int flag= 1;
    for( i=0, j=strlen(s)-1;i<j; i++,j--)
    {
        if(s[i]!= s[j])
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
int main ()
{
    char s[1001];
    scanf("%s",s);
    int flag = is_palindrome(s);
    if(flag==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}