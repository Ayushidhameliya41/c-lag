//sum of all the numbers from 1 to N 
#include<stdio.h>
int main()
{
    int N,sum=0;
    printf("enter number :- ");
    scanf("%d",&N);

    for (int i = 1; i <= N; i++)
    {
        sum += i;
    }
    printf("sum = %d",sum);
}