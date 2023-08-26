// #include<stdio.h>   (return + parametar)
// int sum(int a,int b)
// {
//     int s=a+b;
//     return s;
// }

// int main ()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int s=a+b;
//     printf("%d\n",s);

//     return 0;
// }

// ( Return + no parametar)
// #include<stdio.h>
// int sum(void)
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int s=a+b;
    


// }
// int main ()
// {
//     int s=sum();
//     printf("%d\n",s);

    
//     return 0;
// }

// no return +  parametar

// #include<stdio.h>
// void sum(int a, int b)
// {
//     int s=a+b;
//     printf("%d\n",s);
    
// }
// int main ()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     sum(a,b);
//     return 0;
// }

// no return + no parametar

// #include<stdio.h>
// void sum(void)
// {
//     int a,b;
//     scanf("%d %d",&a, &b);
//     int s=a+b;
//     printf("%d\n",s);
// }
// int main ()
// {
//     sum();
//     return 0;
// }
#include <stdio.h>
    int sum(int x, int y)
    {
    	int res = x+y;
        return res;
    }
    int main()
    {
        sum(5,6);
    }