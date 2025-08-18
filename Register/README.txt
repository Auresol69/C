
"Từ khóa "register" trong ngôn ngữ C

A declaration of an identifier for an object with storage-class specifier register suggests that access to the object be as fast as possible. The extent to which such suggestions are effective is implementation-defined.

Quá trình cấp phát một biến sử dụng thanh ghi nào sẽ được thực thi tự động và do compiler quyết định. Nhưng bạn cũng có thể chỉ định một thanh ghi cụ thể, nếu có sự kết hợp với những code assembly.

Không thể sử dụng toán tử '&' để lấy địa chỉ của một biến được khai báo với từ khóa "register". Đối với những biến này không được cấp địa chỉ trong vùng nhớ mà được gán vào một thanh ghi (general purpose registers - R_x). Việc truy cập địa chỉ của một thanh ghi R_x là không hợp lệ.

Từ khóa "register" có thể được sử dụng với một biến con trỏ.

register là một "storage-class specifiers" xem thêm tài liệu tham khảo (tài liệu chương 6.7.1). Cần lưu ý là tránh sử dụng nhiều từ khóa "storage-class" cho một biến.

Không giới hạn số lượng biến khai báo với từ khóa register. Quá trình build chương trình compiler sẽ quyết định cấp phát hay không một biến tới một thanh ghi.

Tham khảo thêm thông tin theo link:
(1) https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1124.pdf
(2) https://www.geeksforgeeks.org/understanding-register-keyword/"
