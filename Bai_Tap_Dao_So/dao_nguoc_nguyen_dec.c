#include <stdio.h>

int xuly(const int *a)
{
    int reversedNum = 0;
    int Num = *a;
    while (Num != 0)
    {
        int temp = Num % 10;
        reversedNum = reversedNum * 10 + temp;
        Num /= 10;
    }
    return reversedNum;
}

int main(void)
{
    int a = 45678;

    printf("%d\n", xuly(&a)); // Output: 87654

    return 0U;
}