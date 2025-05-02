#include<stdio.h>
int main()
{
    int n=5,i=1,sum=0;

    while(i<=n)
    {
        printf("%d",i);
        sum=sum+i;
        printf("sum :- %d \n",sum);
        i++;
    }
}