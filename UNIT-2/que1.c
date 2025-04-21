#include<stdio.h>
int main()
{
    int r;
    float PI=3.14,ans;
    printf("Enter the value of R :-");
    scanf("%d",&r);
    ans = PI * r * r;
    printf("ans :- %.2f",ans);
    return 0;
}