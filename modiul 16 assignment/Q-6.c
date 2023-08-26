// Call by value


#include<stdio.h>
void function(int x)
{
    x = 200;
}
int main ()
{
    int x=5;
    printf("Before call function %d\n",x);
    function(x);
    printf("After call function %d",x);
    return 0;
}

// Call by reference

#include<stdio.h>
void function(int *p)
{
    *p = 200;
}
int main ()
{
    int x=5;
    printf("Before call function %d\n",x);
    function(&x);
    printf("After call function %d",x);
    return 0;
}