#include <stdio.h>

#define div(a, b) ((a) / (b))

int main(void)
{
    unsigned int x = 0;
    x = div(6 + 1, 3 + 1);

    printf("%d\n", x);
    return 0U;
}