#include <stdio.h>

#define SIZE 4

int main(void)
{
    int arr[4] = {1, 2, 3, 4};

    // Nhìn lại bên Pointer_To_Array sẽ có dấu ngoặc (* ptr)[SIZE] (Đây là điểm khác biệt)
    int *ptr[SIZE];

    for (int i = 0; i < SIZE; i++)
        ptr[i] = &arr[i];

    for (int i = 0; i < SIZE; i++)
        printf("%d ", *ptr[i]);

    return 0U;
}