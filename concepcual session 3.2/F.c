#include<stdio.h>
#include<string.h>
int main ()
{
    int m;
    scanf("%d",&m);
    for (int i=0; i<m; i++)
    {
        char v[101];
        scanf("%s\n",v);
        int size = strlen (v);
        if(size > 10){
            printf("%c%d%c\n",v[0],size-2,v[size-1]);
        }
        else{
            printf("%s\n",v);
        }
    }

    return 0;
}