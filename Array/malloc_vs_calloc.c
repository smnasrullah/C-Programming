#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array;
    int i, n, nn;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    array = (int *)malloc(n * sizeof(int));

    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Default Values :\n", n);
    for (i = 0; i < n; i++)
        {
        printf("%d ", array[i]);
        }

    printf("\n Enter the new size of the array: ");
    scanf("%d", &nn);

    realloc(array,nn);

    printf("New  Values :\n", n);
    for (i = 0; i < nn; i++) {
        printf("%d ", array[i]);
    }

    free(array);

    return 0;
}
