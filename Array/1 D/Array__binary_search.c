#include <stdio.h>
int main()
{
    int i, first, last, middle, n, item;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int array[n];

    printf("Enter %d integers\n", n);

    for (i= 0; i < n; i++)
        scanf("%d", &array[i]);

    printf("Enter value to find\n");
    scanf("%d", &item);

    first = 0;
    last = n - 1;

    while (first <= last)
    {
        middle = (first + last)/2;
        if (array[middle] < item)
            first = middle + 1;
        else if (array[middle] == item)
        {
            printf("%d found at location %d.\n", item, middle+1);
            break;
        }
        else
            last = middle - 1;


    }
    if (first > last)
        printf("Not found! %d isn't present in the list.\n", item);

    return 0;
}
