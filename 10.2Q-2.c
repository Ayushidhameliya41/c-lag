#include <stdio.h>
int findLength(int arr[], int size)
{
    return size;
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int length = findLength(array, n);
    printf("Length of the array: %d\n", length);

    return 0;
}
