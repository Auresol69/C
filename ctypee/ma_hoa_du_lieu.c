#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch)) // nếu là chữ cái
        {
            putchar(ch + 1); // in ra kí tự kế tiếp
        }
        else
        {
            putchar(ch); // hiển thị bình thường
        }
    }
    putchar(ch); // xuống hàng
    return 0;
}