//Write a program to count digits in a given number
#include<stdio.h>

int main()
{
    int N;   //N is the given number.
    scanf("%d",&N);
    int count=0;
    for(int i=N;i!=0;)
    {
        i=i/10;
        count++;
    }
    printf("%d has %d digits ",N,count);
    return 0;
}
