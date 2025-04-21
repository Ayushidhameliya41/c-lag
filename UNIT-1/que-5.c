#include<stdio.h>
int main()
{
    int r;
    float PI=3.14,ans;
    printf("Enter the value of Radius :-");
    scanf("%d",&r);
    ans=2*PI*r;
    printf("radius :-%.2ff",ans);
    return 0;
}