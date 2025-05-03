#include<stdio.h>
int main()
{
    int i=1,no;
    printf("Enter no :- ");
    scanf("%d",&no);

    
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",no,i,no*i);
    }
}