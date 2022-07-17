//Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>

int main()
{
    int N,n,s=0;
    scanf("%d",&N);
    n=2*N-1;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
           continue;
        else
           s=s+i;
    }
    printf("sum of first %d odd natural numbers is %d",N,s);
    return 0;
}
