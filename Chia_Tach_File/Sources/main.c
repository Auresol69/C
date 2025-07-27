// thường gồm 2 thành phần : .h, .c

#include "../Headers/demo.h"

int a = 10, b = 5;

int main(void)
{
    printf("Tong hai so %d va %d la: %d\n", a, b, tong(a, b));
    printf("Hieu hai so %d va %d la: %d\n", a, b, hieu(a, b));
    return 0;
}