#include <stdio.h>
#include <stdlib.h>

typedef union
{
    unsigned int a;
    unsigned char b;
} GPIO_Type;

int main()
{
    GPIO_Type GPIO;
    printf("sizeof cua union: %d\n", sizeof(GPIO_Type));
    GPIO.a = 1222;
    printf("Gia tri cua a1: %u\n", GPIO.a);
    printf("Gia tri cua b1: %u\n", GPIO.b);
    GPIO.b = 1;
    printf("Gia tri cua a2: %u\n", GPIO.a);
    printf("Gia tri cua b2: %u\n", GPIO.b);

    return 0;
}