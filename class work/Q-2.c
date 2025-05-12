#include <stdio.h>

int main()
{
    int i, n,sum=0;
    float ans;

    printf("Enter the array: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    ans = sum / n;
    printf("ans = %.2f",ans);
    return 0;
}