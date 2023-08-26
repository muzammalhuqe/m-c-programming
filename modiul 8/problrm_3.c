#include<stdio.h>
int main ()
{
    int n, even = 0, odd = 0;
    scanf("%d ", &n);
    int ar[n];
    for (int i=1; i<=n; i++)
    {
        scanf("%d ",&ar[i]);
        if(ar[i] % 2 == 0){
            even = even + ar[i];
        }
        else{
            odd = odd + ar[i];
        }
    }
        printf("%d %d", even, odd);

    return 0;
}