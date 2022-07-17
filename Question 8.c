//Write a program to check whether a given number is a Prime number or not.
#include<stdio.h>

int main()
{
    int N;   //N is the given number.
    scanf("%d",&N);
    int i;
    for( i=2;i<N;i++)
    {
        if(N%i==0)
            break;
    }
    if(i==N)
        printf("Given number is Prime \n");
    else
        printf("Given number is Not Prime ");

    return 0;
}
