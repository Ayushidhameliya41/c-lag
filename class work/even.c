#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter no :- ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("\n%d",i);
        }
    }
}