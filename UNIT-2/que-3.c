#include<stdio.h>
int main()
{
    int b,h;
    float t,ans;
    printf("Enter the value of base :-");
    scanf("%d",&b);
    printf("Enter the value of heigh :-");
    scanf("%d",&h);
    ans=(b*h)/2;
    printf("triangle :-%.2f",ans);
    return 0;
}