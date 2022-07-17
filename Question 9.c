//Write a program to calculate LCM of two numbers
#include<stdio.h>

int main()
{
    int a,b;   //we want to calculate LCM this two numbers.
    scanf("%d%d",&a,&b);
    int L,i;
    L=a>b?a:b;
    for( i=L;i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)
        {
            printf("LCM of %d and %d is %d ",a,b,i);  // here i is the LCM of a and b.
            break;
        }
    }

    return 0;
}
