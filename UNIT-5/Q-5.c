#include<stdio.h>
int main()
{
    int n,i,a,b;
    printf("Enter frist number :- ");
    scanf("%d",&a);
    printf("Enter second number :- ");
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        if(i%4==0)
        {
            printf("leap year :-   %d\n",i);
        }
    }
}