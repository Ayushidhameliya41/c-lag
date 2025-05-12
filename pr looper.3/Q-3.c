#include<stdio.h>
int main()
{
    int fristid,lastid,num,ans;

    printf("Enter any number :- ");
    scanf("%d",&num);

    lastid = num%10;
    fristid = num;
    while( num >= 10 ){
        num = num / 10;
     }
    

     ans = num + lastid ;

     printf("Ans :- %d",ans);
}