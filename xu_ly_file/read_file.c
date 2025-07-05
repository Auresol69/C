#include <stdio.h>

int main(void)
{
    // Read a file
    FILE *pFile = fopen("output.txt", "r");

    char buffer[1024] = {0};

    if (pFile == NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), pFile))
    {
        printf("%s", buffer);
    }

    printf("\n");

    printf("File was read successfully.\n");

    fclose(pFile);

    return 0;
}