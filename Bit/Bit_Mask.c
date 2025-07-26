#include <stdio.h>

// Mặt nạ Bit (Bit-Mask)
// Options
// - Chọn 1 option
// - Chọn cùng lúc nhiều option
// DDRA = 0xFF
// DDRA = 0b0000 1000

int main(void)
{
    unsigned char a = 1 << 3;
    a = ~a;
    printf("%d\n", a);
    return 0;
}