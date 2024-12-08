/* Bubble sort code */
#include <stdio.h>

int main()
{
    int n, i, j, tmp;

    printf("Enter number of elements\n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d integers\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

   for (i = 0; i < n-1; i++)
    {
        for (j = 0 ; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j+1]) /* For decreasing order use '<' instead of '>' */
            {
                tmp   = arr[j];
                arr[j]   = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    printf("Sorted list in ascending order:\n");

      for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
