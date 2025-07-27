#include "../Headers/Check_Extern.h"

int u32ExternChecking;

int main(void)
{
    u32ExternChecking = 10;
    printf("u32ExternChecking = %d\n", u32ExternChecking);
    check_extern_Function();
    return 0;
}