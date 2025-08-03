#include <stdio.h>

int main(void)
{
    int *p;

    int (*ptr)[5];

    int arr[5] = {1, 2, 3, 4, 5}; // arr sẽ được xem như là &arr[0]

    // Points to 0th element of the arr.
    p = arr;

    // Points to the whole array arr.
    ptr = &arr;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
        printf("%d ", *(*ptr + i));

    printf("\n");

    printf("p = %p, ptr = %p\n", p, ptr);

    p++;

    ptr++;

    // Gợi ý: Đẩy Hex về Dec rồi + số phần tử * sizeof(type), chuyển về Hex
    printf("p = %p, ptr = %p\n", p, ptr);

    return 0U;
}