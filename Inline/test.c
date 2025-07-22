// Hàm inline sẽ được trình biên dịch thực hiện thay thế vị trí gọi hàm bằng nội dung hàm (step 4).
// Điều này giúp giảm chi phí gọi hàm và tăng hiệu suất chương trình.
#include <stdio.h>

inline void a(void)
{
    /* do something a */
}

int main()
{
    a(); // Hàm a sẽ được gọi, nhưng nếu trình biên dịch hỗ trợ inline, nó sẽ thay thế bằng nội dung của hàm a.
    /* do something main */

    // The same as
    /* do something a */
    /* do something main */

    return 0;
}