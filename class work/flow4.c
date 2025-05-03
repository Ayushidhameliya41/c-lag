#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enetr a : ");
    scanf("%d",&a);
    printf("Enetr b : ");
    scanf("%d",&b);
    printf("Enetr c : ");
    scanf("%d",&c);
    printf("Enetr d : ");
    scanf("%d",&d);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("a is big");
            }
            else
            {
                printf("d is big");
            }
        }
        else
        {
            if(c>d)
            {
                printf("c is big");
            }
            else
            {
                printf("d is big");
            }
        }
    } 
    else
    {
        if(b>c)
        {
            if((b>d))
            {
                printf("b is big");
            }
            else
            {
                printf("d is big");
            }
        }
        else
        {
            if(c>d)
            {
                printf("c is big");
            }
            else
            {
                printf("d is big");
            }
        }
    }
}