#include<stdio.h>
int main()
{
    int i=1,no;
    printf("Enter no :- ");
    scanf("%d",&no);

    start:
    if(i<=10)
    {
        printf("%d * %d = %d\n",no,i,no*i);
        i++;
        goto start;
    }
}