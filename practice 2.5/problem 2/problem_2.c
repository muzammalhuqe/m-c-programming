#include<stdio.h>
int main()
{
    int a, b, sam, mns, mlt, dvd;

    scanf("%d %d", &a, &b);

    sam = a+b;
    mns = a-b;
    mlt = a*b;
    dvd = a/b;


    // printf("%d + %d = %d\n",a,b,sam);
    // printf("%d - %d = %d\n",a,b,mns);
    // printf("%d * %d = %d\n",a,b,mlt);
    // printf("%d / %d = %d\n",a,b,dvd);
    printf("%d + %d = %d\n", a, b, sam);
    printf("%d - %d = %d\n", a, b, mns);
    printf("%d * %d = %d\n", a, b, mlt);
    printf("%d / %d = %d\n", a, b, dvd);

    return 0;
}