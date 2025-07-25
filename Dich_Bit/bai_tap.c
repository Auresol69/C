// A la 1 so 10 bit
// Thanh ghi B chua 8 bit cao cua A
// 2 bits 4 va 5 cua thanh ghi C chua 2 bit thap cua A
// Tai sao:
// b = a/4;
// c = (a%4) << 4;

#include <stdio.h>

int main(void)
{
    unsigned int A = 0b1110011011; // 0b là tiền tố nhị phân
    unsigned int B = 0;
    unsigned int C = 0;
    unsigned int X = 0;

    B = A >> 2;

    printf("\n B = %d", B);
    printf("\n B1 = %d", A / 4);

    // Lấy 2 bit thấp của A

    // X = A & 0b11;
    //  Hoặc
    X = A % 4;
    printf("\n X = %d", X);

    // Mà 2 bits 4 va 5 cua thanh ghi C chua 2 bit thap cua A

    C = X << 4;
    printf("\n C = %d", C);
    return 0;
}