#include "abc.h"

int main(void)
{
    Checking();
    return 0U;
}

void ReadExternalFlash(void)
{
    // This function is strongly linked, meaning it cannot be overridden
    printf("Reading from Strong Function...\n");
    // Add code to read from external flash memory here
}