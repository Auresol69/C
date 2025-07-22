// Static variables in C

// Biến static được tạo ra duy nhất một lần khi gọi hàm lần đầu tiên và nó sẽ tiếp tục tồn trong suốt vòng đời của chương trình.

// Biến static sẽ lưu trong vùng .bss khi biến đó không được khởi tạo hoặc khởi tạo bằng không và nó sẽ được lưu ở vùng .data nếu khởi tạo một giá trị khác không.

// Vừa có tính chất của 1 biến toàn cục (global variables), vừa mang tính chất của 1 biến cục bộ (local variables)

// Phạm vi truy xuất của một biến/hàm:

// Local variable: Nó chỉ có thể được sử dụng trong khối lệnh mà nó được khai báo, nhưng khi thoát khỏi hàm, nó không bị thu hồi vùng nhớ đã được cấp và được giới hạn trong function được khai báo.

// Global variable: biến không mất đi khi khởi lệnh định nghĩa nó kết thúc, nó vẫn nằm trong vùng nhớ của chương trình và được tự động cập nhật khi khối lệnh đó được gọi lại và nó chỉ nằm trong giới hạn của file nó được khai báo.

// Function: Giới hạn phạm vi hàm đó chỉ được sử dụng trong file được khai báo.

#include <stdio.h>
#include <stdlib.h>

static void Function_Static(void); // Hàm static chỉ có thể được sử dụng trong file này, không thể gọi từ file khác

static int u32KiemTraBienGlobeStatic = 10U; // Biến static chỉ có thể được sử dụng trong file này, không thể gọi từ file khác

int u32KiemTraBienGlobeStatic1 = 10U; // Biến toàn cục có thể được sử dụng trong file khác

int main(void)
{
    Function_Static();
    Function_Static();
    // u8KiemTraBienGlobeStatic++; // Lỗi biên dịch! Biến u8KiemTraBienGlobeStatic không được khai báo trong main
    return 0;
}

static void Function_Static(void)
{
    static unsigned int u32KiemTraBienGlobeStatic = 10U; // Biến static chỉ có thể được sử dụng trong hàm này, không thể gọi từ hàm khác
    static unsigned char u8KiemTraBienGlobeStatic = 10U;
    static unsigned char *pKiemTraBienGlobeStatic = 10U;
    u32KiemTraBienGlobeStatic++;
    printf("Gia tri cua u32KiemTraBienGlobeStatic = %d\n", u32KiemTraBienGlobeStatic);
}