#include <stdio.h>
int Sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int total = Sum(array, n);

    printf("Sum of array elements: %d\n", total);

}
