1. #include <filename>
Tên file được đặt trong dấu ngoặc nhọn < >.

Cách thức tìm kiếm của bộ tiền xử lý (pre-processor): Bộ tiền xử lý sẽ tìm kiếm file header (.h) trong thư mục chứa các file header của thư viện ngôn ngữ C (thường là các thư mục chuẩn của bộ công cụ lập trình - IDE hoặc compiler).

Khi nào nên dùng: Dùng khi bạn muốn thêm các file header của thư viện chuẩn (ví dụ: <stdio.h>, <stdlib.h>, <string.h>).

2. #include "filename"
Tên file được đặt trong dấu ngoặc kép " ".

Cách thức tìm kiếm của bộ tiền xử lý: Bộ tiền xử lý sẽ tìm kiếm file header (.h) trước tiên trong thư mục đang chứa project C/C++ hiện tại.

Trong trường hợp không tìm thấy: Nếu không tìm thấy file trong thư mục project, bộ tiền xử lý sẽ chuyển sang tìm kiếm trong các thư mục của thư viện ngôn ngữ C, giống như cú pháp < >.

Khi nào nên dùng: Dùng khi bạn muốn thêm các file header do bạn tự tạo ra (ví dụ: my_functions.h).

Tổng kết