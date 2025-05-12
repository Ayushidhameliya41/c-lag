#include<stdio.h>
int main()
{
    int i,j;
    int start = 41;

    for(i=1;i<=5;i++){
        for(j=0;j<i;j++)
        {
            printf("%d ", start + j);
        }
        printf("\n");
        
    }
    return 0;
}



/*#include <stdio.h>
int main() {
    int i, j;
    int start = 41;

    for(i = 1; i <= 5; i++) {
        for(j = 0; j < i; j++) {
            printf("%d ", start + j);
        }
        printf("\n");
    }

    return 0;
}


41 
41 42 
41 42 43 
41 42 43 44 
41 42 43 44 45*/