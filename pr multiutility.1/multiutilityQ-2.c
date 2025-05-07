#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter frist angle :- ");
    scanf("%f",&a);
    printf("enter second angle :- ");
    scanf("%f",&b);
    c = 180 - a - b ;
    printf("c = %.0f",c);
}