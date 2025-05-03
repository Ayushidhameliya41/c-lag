#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter no A :- ");
    scanf("%d",&a);
    printf("Enter no B :- ");
    scanf("%d",&b);
    printf("Enter no C :- ");
    scanf("%d",&c);
    if ( a > b && a > c )
    {
        printf("A is Max");
    }
    else if ( b > a && b > c )
    {
        printf("B is Max");
    }
    else if ( c > a && c > b)
    {
         printf("C is Max");
    }
    else 
    {
        printf("All are Equal");
    }
 }