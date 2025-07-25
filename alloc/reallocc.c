#include <stdio.h>
#include <stdlib.h> // for realloc() and free()

int main(void)
{

    // realloc() = Reallocation.
    //             Resize previously allocated memory
    //             If the new size is larger, the additional memory is uninitialized.
    //             If the new size is smaller, the excess memory is freed.
    //             realloc will also free() old memory.
    //             realloc(ptr,bytes)

    int number = 0;
    printf("Enter the number of prices: ");
    scanf("%d", &number);

    float *prices = calloc(number, sizeof(float));

    if (prices == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < number; i++)
    {
        printf("Enter price #%d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    int newNumber = 0;
    printf("Enter a new number of prices: ");
    scanf("%d", &newNumber);

    float *temp = realloc(prices, newNumber * sizeof(float));

    if (temp == NULL)
    {
        printf("Could not reallocate memory.\n");
    }
    else
    {
        prices = temp;
        temp = NULL; // Avoid dangling pointer

        for (int i = number; i < newNumber; i++)
        {
            printf("Enter price #%d: ", i + 1);
            scanf("%f", &prices[i]);
        }

        for (int i = 0; i < newNumber; i++)
        {
            printf("$%.2f ", prices[i]);
        }
    }

    free(prices);
    prices = NULL;

    return 0;
}