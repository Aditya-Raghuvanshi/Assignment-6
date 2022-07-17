//Write a program to reverse a given number.
#include<stdio.h>

int main()
{
    int N;   //we want to reverse N.
    scanf("%d",&N);
    int i,r=0;

    for(i=N;i!=0;)
    {
        r=r*10+(i%10);
        i=i/10;
    }
    printf("reversed number is %d",r);
    return 0;
}
