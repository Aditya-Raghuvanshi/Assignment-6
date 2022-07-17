//Write a program to calculate factorial of a number
#include<stdio.h>

int main()
{
    int N,f=1;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        f=f*i;
    }
    printf("factorial of %d is %d",N,f);
    return 0;
}
