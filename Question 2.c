//Write a program to calculate sum of first N even natural numbers
#include<stdio.h>

int main()
{
    int N,n,s=0;
    scanf("%d",&N);
    n=2*N;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
           s=s+i;
    }
    printf("sum of first %d even natural numbers is %d",N,s);
    return 0;
}
