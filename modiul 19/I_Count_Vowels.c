// #include<stdio.h>
// int count(char s[],int i)
// {
//     if(s[i]=='\0') return 0; //base case
//     int ans = count(s,i+1);
//     if(s[i]=='A' || s[i]== 'Z')
//     {
//         s[i]= s[i] + 32;
//     }
//     if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||
//     s[i]=='o' ||s[i]=='u')
//     {
//         return ans+1;
//     }
//     else
//     {
//         return ans;
//     }
// }
// int main ()
// {
//     char s[202];
//     fgets(s, 202, stdin);
//     int result = count(s,0);
//     printf("%d",result);
//     return 0;
// }

#include<stdio.h>
int count(char s[], int i)
{
    // base case
    if(s[i]=='\0') return 0;
    int ans = count(s,i+1);
    if(s[i]>= 'A' && s[i]<= 'Z')
    {
        s[i]= s[i]+32;
    }
    if(s[i]== 'a'|| s[i]== 'e'|| s[i]== 'i'||
    s[i]== 'o' || s[i]== 'u')
    {
        return ans+1;
    }
    else
    {
        return ans;
    }
}
int main ()
{
    char s[201];
    fgets(s,201,stdin);
    int result = count(s,0);
    printf("%d",result);
    return 0;
}