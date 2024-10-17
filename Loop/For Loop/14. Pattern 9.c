/*
C-Programming
---------------------------------------------------------------------
Topic        : Loop- For Loop
Description  : Pattern 9
                1
                01
                101
                0101
Programmer   : S. M. Nasrullah Hamim
                    hamim321182@gmail.com
Date         : 16/10/2024
---------------------------------------------------------------------
*/
#include <stdio.h>
int main()
{
    int i, j, n, p, q;

    printf("Input number of rows : "); // Prompt the user for input.
    scanf("%d", &n); // Read the value of 'n' from the user.

    for (i = 1; i <= n; i++) // Loop for the number of rows.
    {
        if (i % 2 == 0) // Check if 'i' is even.
        {
            p = 1;
            q = 0;
        }
        else // If 'i' is odd.
        {
            p = 0;
            q = 1;
        }

        for (j = 1; j <= i; j++) // Loop for each element in the row.
        {
            if (j % 2 == 0)
                printf("%d", p); // Print 'p' if 'j' is even.
            else
                printf("%d", q); // Print 'q' if 'j' is odd.
        }

        printf("\n");
    }
}