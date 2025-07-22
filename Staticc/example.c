#include <stdio.h>

void counter()
{
    // Biến static cục bộ
    static int count = 0; // Khởi tạo chỉ một lần duy nhất khi hàm được gọi lần đầu tiên

    count++; // Tăng giá trị của biến count

    printf("Count: %d\n", count);
}

int main()
{
    printf("Calling counter() for the first time:\n");
    counter(); // count = 1

    printf("\nCalling counter() for the second time:\n");
    counter(); // count = 2

    printf("\nCalling counter() for the third time:\n");
    counter(); // count = 3

    // Thử truy cập 'count' từ bên ngoài hàm counter()
    // printf("Trying to access count from main: %d\n", count); // Lỗi biên dịch! 'count' không được khai báo trong main

    return 0;
}