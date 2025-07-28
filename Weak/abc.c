#include "abc.h"

__attribute__((weak)) void ReadExternalFlash(void)
{
    // This function is weakly linked, meaning it can be overridden by a stronger definition
    printf("Reading from Weak Function...\n");
    // Add code to read from external flash memory here
}

void Checking(void)
{
    ReadExternalFlash();
    /* Do abc */
}