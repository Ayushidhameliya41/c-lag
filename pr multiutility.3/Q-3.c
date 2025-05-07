#include<stdio.h>
int main()
{
    int fd,ld,no,ans;

    printf("Enter any number :- ");
    scanf("%d",&no);

    fd = no%10;

    while( no >= 10 ){
        no = no / 10;
     }
     ld = no;

     ans = fd + ld ;

     printf("Ans :- %d",ans);
}