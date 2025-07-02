#include <stdio.h>

int main()
{
    int i = 0, j;
    i++, j = i * 2; // <=> i = i + 1;
    //                     j = i * 2;
    printf("i = %d, j = %d\n", i, j);
    int x, y, z;
    x = (y = 3, (z = ++y + 2) + 5);
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    return 0;
}