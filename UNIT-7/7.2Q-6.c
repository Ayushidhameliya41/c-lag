#include<stdio.h>
int main()
{
    int i, j, s;

    for(i = 0; i < 5; i++){
        
        for(s = 0; s < i; s++){
            printf("  ");
        }

        for(j = 5; j > i; j--){
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
/*
5 4 3 2 1
  5 4 3 2 
    5 4 3
      5 4
        5*/