#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int i, size, element, position;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    array = (int *)malloc(size * sizeof(int));
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) 
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert: ");
    scanf("%d", &position);

    if (position < 0 || position > size) 
    {
        printf("Invalid position.\n");
        free(array);
        return 1;
    }

    size++;
    realloc(array,size);

    for (int i = size-1; i > position; i--) \
    {
        array[i] = array[i - 1];
    }

    printf("Insertation");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    array[position] = element;

    /*printf("Array after insertion:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("\n");*/

    free(array);

    return 0;
}
