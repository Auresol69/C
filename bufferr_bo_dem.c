#include <stdio.h>

int main(void)
{
    // Buffered
    // char c;
    // while ((c = getchar()) != '#')
    // {
    //     putchar(c);
    // }

    // // Unbuffered
    // char d;
    // while ((d = getch()) != '#')
    // {
    //     putchar(d);
    // }

    char ch;
    while ((ch = getche()) != '#')
    {
        putchar(ch);
    }

    return 0;
}