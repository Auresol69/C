#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_SCREENS 8

typedef enum
{
    SCREEN_1 = 0,
    SCREEN_2 = 3,
    SCREEN_3 = 4,
    SCREEN_4 = 6,
    SCREEN_5 = 7
} ScreenType;

/* Prototype */
int PrintScreen1(int a, int b);
int PrintScreen2(int a, int b);
int PrintScreen3(int a, int b);
int PrintScreen4(int a, int b);
int ArrayOfFunctionPointer(ScreenType Screen);

/* Function Pointer */
static int (*handler_table[NUMBER_OF_SCREENS])(int, int) = {
    [SCREEN_1] = PrintScreen1,
    [SCREEN_2] = PrintScreen2,
    [SCREEN_3] = PrintScreen3,
    [SCREEN_4] = PrintScreen4,
    [SCREEN_5] = NULL // Assuming no function for SCREEN_5
};

int main(void)
{
    ArrayOfFunctionPointer(SCREEN_4);

    return 0U;
}

int ArrayOfFunctionPointer(ScreenType Screen)
{
    if ((handler_table[Screen] != NULL) && (Screen < NUMBER_OF_SCREENS))
    {
        return handler_table[Screen](7, 8);
    }
    else
    {
        printf("Error");
    }
}

int PrintScreen1(int a, int b)
{
    printf("Print Screen 1: %d, %d\n", a, b);
}

int PrintScreen2(int a, int b)
{
    printf("Print Screen 2: %d, %d\n", a, b);
}
int PrintScreen3(int a, int b)
{
    printf("Print Screen 3: %d, %d\n", a, b);
}

int PrintScreen4(int a, int b)
{
    printf("Print Screen 4: %d, %d\n", a, b);
}