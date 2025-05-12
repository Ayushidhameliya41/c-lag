#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf("Enter the array :- ");
    scanf("%d",&n);

    int a[n],b[n];

    printf("\n print array A's element\n");
    for(i=0;i<n;i++){
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }

    printf("\n print array B's element\n");
    for(i=0;i<n;i++){
        printf("a[%d]= ",i);
        scanf("%d",&b[i]);
    }
    printf("\n print array A's element\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n print array B's element\n");
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum += a[i] + b[i];
    }
    printf("\nans = %d\n",sum);
}