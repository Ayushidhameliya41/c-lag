#include<stdio.h>
int main()
{
    int i,j,sum=1;

    for(i=1;i<=5;i++){
        for(j=i;j>=1;j--)
        {
            printf("%d ",sum);
            sum++;
        }
        printf("\n");
        
    }
    return 0;
}

/*1
2 3 
4 5 6
7 8 9 10
11 12 13 14 15*/