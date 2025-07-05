#include <stdio.h>
#include <stdlib.h> // for malloc() and free()

int main(void)
{
    // malloc() = A function in C that dynamically allcates
    //            a specified number of bytes in memory

    // char grades[5] = {0}; // fixed size

    int number = 0;
    printf("Enter the number of grades: ");
    scanf("%d", &number);

    char *grades = malloc(number * sizeof(char));

    if (grades == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1; // Exit with an error code
    }

    for (int i = 0; i < number; i++)
    {
        printf("Enter grade #%d: ", i + 1);
        scanf(" %c", &grades[i]);
    }

    for (int i = 0; i < number; i++)
    {
        printf("Grade #%d: %c\n", i + 1, grades[i]);
    }

    free(grades);  // returning "rented" space back to the OS
    grades = NULL; // avoid dangling pointers

    return 0;
}