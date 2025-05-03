#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enetr a : ");
    scanf("%d",&a);
    printf("Enetr b : ");
    scanf("%d",&b);
    printf("Enetr c : ");
    scanf("%d",&c);
    if(a>b) 
    {
        if(a>c)
        {
            printf("a is big");
        }else
        {
            printf("c is big");
        }
    }
    else
    {
        if(b>c)
        {
            printf("b is big");
        }else
        {
            printf("c is big");
        }
    }
}
    
