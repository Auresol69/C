#include <stdio.h>

int main()
{

    // Array2D.c
    // This program demonstrates how to create a 2D array in C.
    // A 2D array is essentially an array of arrays, allowing you to store data in a grid-like structure.
    // A 2D array is an array of arrays, where each element is itself an array.
    // In C, a 2D array can be declared as follows:

    // int rows = 3;
    // int cols = 4;
    // int array2D[rows][cols];

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         printf("Enter element [%d][%d]: ", i, j);
    //         scanf("%d", &array2D[i][j]);
    //     }
    // }

    // printf("The 2D array is:\n");
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         printf("%d ", array2D[i][j]);
    //     }
    //     printf("\n");
    // }

    // Another example of a 2D array with char

    char array2DChar[3][100];

    int sizeHang = sizeof(array2DChar) / sizeof(array2DChar[0]);      // Number of rows
    int sizeCot = sizeof(array2DChar[0]) / sizeof(array2DChar[0][0]); // Number of columns

    printf("%d", sizeHang);

    for (int i = 0; i < sizeHang; i++)
    {
        scanf("%s", array2DChar[i]);
    }

    printf("The 2D array of characters is:\n");
    for (int i = 0; i < sizeHang; i++)
    {
        printf("%s\n", array2DChar[i]);
    }

    return 0;
}