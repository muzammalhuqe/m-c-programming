#include <stdio.h>
int main()
{
    int i;
    int N;
    scanf("%d",&N);

    for (i = 1; i<=N; i=i+1)
    {
      if(i%2 == 0)
      {
        printf("%d-even\n", i);
      }
      else
      {
        printf("%d-odd\n", i);
      }
    }
    return 0;
}