#include "../Headers/Check_Extern.h"

extern int u32ExternChecking; // Biến extern được định nghĩa ở file khác, các file khác có thể sử dụng chung

int check_extern_Function()
{
    printf("u32ExternChecking = %d\n", ++u32ExternChecking);
    return 0;
}