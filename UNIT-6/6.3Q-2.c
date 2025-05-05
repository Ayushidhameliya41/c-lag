#include<stdio.h>
int main()
{
    int i,N,fac = 1;
    printf("Enter No :- ");
    scanf("%d",&N);

    for( i = 1; i <= N; i++ )
    {
    fac = fac * i ;
    }
    printf("the factorial of %d is:- %d",N ,fac);

    return 0;
     
}