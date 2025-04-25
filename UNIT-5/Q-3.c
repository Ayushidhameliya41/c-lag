#include<stdio.h>
int main()
{
    float m,e,s,ave;
    printf("Enetr Maths marks : ");
    scanf("%f",&m);
    printf("Enetr English marks : ");
    scanf("%f",&e);
    printf("Enetr Science marks : ");
    scanf("%f",&s);
    ave=(m+e+s)/3;
    printf("Average mark : %f",ave);
}