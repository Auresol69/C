#include <stdio.h>
#include <string.h>

int strlenXXX(const char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        ++i;
    }
    return i;
}

int main()
{
    const char hoclaptrinh[] = "Hoc lap trinh C";

    int len = strlen(hoclaptrinh);
    printf("%d\n", len); // Không tính ký tự kết thúc chuỗi '\0'

    printf("%s\n", hoclaptrinh);
    printf("Do dai cua chuoi: %zu\n", sizeof(hoclaptrinh) - 1); // -1 to exclude the null terminator ( \0 )
    printf("Ky tu dau tien: %c\n", hoclaptrinh[0]);

    const char kienthuc[] = "\0";
    printf("Chuoi rong: %s\n", kienthuc);
    printf("Do dai cua chuoi: %zu\n", sizeof(kienthuc) - 1);

    const char sinhvien[] = "luoi "
                            "bieng\0"
                            " cuc ky";
    printf("Chuoi da noi: %s\n", sinhvien);
    printf("%d\n", strlen(sinhvien)); // Chỉ tính đến ký tự đầu tiên của chuỗi, không tính ký tự kết thúc chuỗi '\0'
    return 0;
}