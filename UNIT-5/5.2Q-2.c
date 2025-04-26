#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enetr a value of the first number : ");
    scanf("%d",&a);
    printf("Enetr a value of the second number : ");
    scanf("%d",&b);
    printf("Enetr a value of the third number : ");
    scanf("%d",&c);
    printf("Enetr a value of the fourth number : ");
    scanf("%d",&d);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("the minimuum value is : %d",a);
            }
            else
            {
                printf("the minimuum value is : %d",d);
            }
        }
        else
        {
            if(c>d)
            {
                printf("the minimuum value is : %d",c);
            }
            else
            {
                printf("the minimuum value is : %d",d);
            }
        }
    } 
    else
    {
        if(b>c)
        {
            if((b>d))
            {
                printf("the minimuum value is : %d",b);
            }
            else
            {
                printf("the minimuum value is : %d",d);
            }
        }
        else
        {
            if(c>d)
            {
                printf("the minimuum value is : %d",c);
            }
            else
            {
                printf("the minimuum value is : %d",d);
            }
        }
    }
}