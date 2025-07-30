#include <stdio.h>
#include <stdint.h>

uint32_t u32Count = 0x1234;
// 0000 0000 0000 0000 0001 0010 0011 0100

// max: 0xFFFFFFFF

uint8_t countNumberHex(uint32_t *pNumber)
{
    uint8_t hexNumberCount = 9;
    uint8_t u8Count = 1U;
    uint32_t u32TempNumber = 0;
    do
    {
        u32TempNumber = (*pNumber >> (32U - u8Count * 4U)) & 0xFU;
        u8Count++;
        hexNumberCount--;
    } while (u32TempNumber == 0U);
    return hexNumberCount;
}

void reversedNumberHex(uint32_t *pNumber)
{
    uint32_t u32TempNumber = 0;
    uint8_t u8Count = 0U;
    uint8_t u8LengthNumber = countNumberHex(pNumber);

    while (u8LengthNumber > 0U)
    {
        /*                đẩy phải lấy mấy số hex đầu          &   chỉ lấy Byte 1          */
        u32TempNumber |= (((*pNumber >> ((u8LengthNumber - 1) * 4U)) & 0xFU) << (u8Count * 4U));
        u8LengthNumber--;
        u8Count++;
    }

    *pNumber = u32TempNumber;
}

int main(void)
{
    printf("Count of hex number: %u\n", countNumberHex(&u32Count));
    reversedNumberHex(&u32Count);
    printf("Reversed hex number: 0x%04X\n", u32Count);
    return 0U;
}