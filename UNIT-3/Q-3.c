//( x + y )( x + y )( x + y )
#include<stdio.h>
int main()
{
    int x,y,ans;
    printf("Enter x :- ");
    scanf("%d",&x);
    printf("Enter y :- ");
    scanf("%d",&y);
    ans=( x + y )*( x + y )*( x + y );
    printf("ans = %d",ans);
    return 0;
}