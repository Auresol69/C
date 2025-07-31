#include <stdio.h>
#include <stdint.h>

uint32_t u32Count = 1234567;

uint32_t reversedNumberBin(uint32_t *u32Number)
{
    uint8_t u8Count = 32U;
    uint32_t u32TempNumber = 0U;
    while (u8Count > 0)
    {
        u32TempNumber |= ((*u32Number >> (u8Count - 1U)) & 0x1U) << (32U - u8Count);
        u8Count--;
    }

    return u32TempNumber;
}

int main(void)
{
    printf("%u\n", reversedNumberBin(&u32Count));
    return 0U;
}