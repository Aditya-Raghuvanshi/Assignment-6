//Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>

int main()
{
    int N,s=0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        s=s+i*i*i;
    }
    printf("sum of cube of first %d natural numbers is %d",N,s);
    return 0;
}
