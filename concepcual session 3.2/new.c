#include<stdio.h>
#include<string.h>
int main ()
{
    // char c[100];
    // scanf("%s",c);
    // int size= strlen(c);
    // int cnt =0;
    // for (int i=0; i<=size;i++)
    // {
    //     if (c[i]== 'a'|| c[i]== 'i' || c[i]== 'e')
    //     {
    //         cnt ++;
    //     }
    // }
    // printf("%d",cnt);

    char c;
    int cnt=0;
    while(scanf("%c",&c)!= EOF){
        if (c == 'a'|| c == 'i' || c == 'e')
        {
            cnt ++;
        }
    }
    printf("%d",cnt);
    

    return 0;
}