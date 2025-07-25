#include <stdio.h>

int main(void)
{
    unsigned int a = 120; // 0111 1000

    unsigned char c = 5; // 0000 0101
    unsigned char b = 6; // 0000 0110
                         // c ^ b = 0000 0011 (hệ 10 là 3)
    // Chỉ được 1 true, cùng false hoặc true thì false
    printf("%d\n", c ^ b); // XOR operation between c and b

    // Shift right by 7 bits and mask with 0x1 to get the 8th bit
    // This will give us the value of the 8th bit (0 or 1)
    // toan tu dich bit sang trai
    // and toan tu & de lay bit cuoi cung
    printf("%d", (a >> 7) & 0x1);
    return 0;
}