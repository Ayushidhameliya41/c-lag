#include<stdio.h>
int main()
{
    int fd,ld,num,ans;

    printf("Enter any number :- ");
    scanf("%d",&num);

    fd = num%10;

    while( num >= 10 ){
        num = num / 10;
     }
     ld = num;

     ans = num + ld ;

     printf("Ans :- %d",ans);
}