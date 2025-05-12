#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter the array: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
    }

    printf("\nLength of array is: %d\n", n);

    return 0;
}
