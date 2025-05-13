#include<stdio.h>
int main()
{
    int i, j, s;

    for(i = 1; i <= 5; i++) {
        // Print spaces
        for(s = 0; s < i; s++) {
            printf("  ");
        }
        // Print alternating 1s and 0s
        for(j = 0; j <= 5 - i; j++) {
            printf("%d ", (i + j) % 2);
        }
        printf("\n");
    }
    return 0;
}
