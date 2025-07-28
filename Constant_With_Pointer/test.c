#include <stdio.h>

int main(void)
{
    // Pointer To Constant
    const int a = 100;
    const int *PointerToConstant = &a;
    // This pointer is pointing to a constant integer
    printf("Value of a: %d\n", *PointerToConstant);

    // Sai vì PointerToConstant không thể thay đổi giá trị const của con trỏ PointerToConstant đang trỏ tới ( là a )
    // *PointerToConstant = 5;

    // Dòng dưới sẽ không thay đổi giá trị của a, chỉ thay đổi địa chỉ mà PointerToConstant trỏ tới
    PointerToConstant++;
    printf("Address of a: %p\n", (void *)PointerToConstant);

    // --------------------------------------------------------------------------------------------------------------

    // Constant Pointer
    int *const ptr2 = &a;

    printf("Value of ptr2: %d\n", *ptr2);

    // Đúng vì giá trị có thể thay đổi được
    *ptr2 = 200;
    printf("New value of a: %d\n", *ptr2);

    // Sai vì địa chỉ ptr2 không thể thay đổi
    // ptr2++;

    return 0U;
}