//PRINT 1 TO N USE DO-WHILE
#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter n :- ");
    scanf("%d",&n);

    do 
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
        i++;
    }while(i<=n);
}