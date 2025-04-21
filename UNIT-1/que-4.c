#include<stdio.h>
int main()
{
    int p,r,n;
    float s;
    printf("Enter the Principle Amount :-");
    scanf("%d",&p);
    printf("Enter the Rate :-");
    scanf("%d",&r);
    printf("Enter the time in a month :-");
    scanf("%d",&n);
    s=(p*r*n)/100;
    printf("Simple Enterest :-%.2f",s);
    return 0;
}