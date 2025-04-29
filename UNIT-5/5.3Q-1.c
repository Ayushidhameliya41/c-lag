#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enetr a value of the first number : ");
    scanf("%d",&a);
    printf("Enetr a value of the second number : ");
    scanf("%d",&b);
    printf("Enetr a value of the third number : ");
    scanf("%d",&c);
    if(a<b) 
    {
        if(b<c)
        {
            printf("the minimuum value is : %d",b);
        }else
        {
            printf("the minimuum value is : %d",c);
        }
    }
    else
    {
        if(a<c)

        {
            printf("the minimuum value is : %d",a);
        }else
        {
            printf("the minimuum value is : %d",c);
        }
    }
}