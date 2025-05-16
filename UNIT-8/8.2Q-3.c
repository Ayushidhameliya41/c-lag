#include <stdio.h>

int main() 
{
    int s, i, j, sum = 0;

    printf("Enter the size of the row & coloum matrix: ");
    scanf("%d", &s);

    int a[s][s];    

    printf("\nEnter elements :\n");
    for (i = 0; i < s; i++) {
        for (j = 0; j < s; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    
    for (i = 0; i < s; i++) {
        sum += a[i][i];
    }

    printf("\nSum of main diagonal elements: %d\n", sum);

    return 0;
}
