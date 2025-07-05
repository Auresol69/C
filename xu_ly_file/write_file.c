#include <stdio.h>

int main(void)
{
    // Write a file
    FILE *pfile = fopen("output.txt", "w");

    char text[] = "Hello, World!\nNice to meet you!";

    if (pfile == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fprintf(pfile, "%s", text);

    printf("File was written successfully.\n");

    fclose(pfile);
    return 0;
}