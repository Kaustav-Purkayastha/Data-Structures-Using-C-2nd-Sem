#include <stdio.h>

//Program to implement Bubble Sort.

void main()
{
    int arr[100], n, i, j, swap;

    printf("How many numbers do you want to enter: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
        }
    }

    printf("\nSorted List in ascending order: \n");
    for (i = 0; i < n; i++)
        printf("%d\n", arr[i]);
}
