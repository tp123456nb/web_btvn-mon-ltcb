/*
11. Gia sư toán (Bắt buộc)
Viết một chương trình có thể sử dụng như một gia sư về toán cho các bạn nhỏ. Chương
trình sẽ hiển thị hai số ngẫu nhiên để thực hiện phép cộng, ví dụ:247 +129 =
Sau đó chờ người dùng nhập tổng của 2 số trên. Nếu kết quả đúng thì thông báo chúc
mừng. Nếu sai thì thông báo kết quả không chính xác và kết quả đúng là bao nhiêu.
*/
//yeu cau viet chuong trinh co the su dung nhu mot gia su toan cho cac ban nho 
//buoc 1 khai bao bien 
//buoc 2 nhap du lieu 
//buoc 3 kiem tra 

#include <iostream>
#include <cstdlib>  
#include <ctime>   
using namespace std;
int main() {
    // Khởi tạo bộ sinh số ngẫu nhiên
    srand(time(0));
    int so1 = rand() % 100; // Số ngẫu nhiên 0-99
    int so2 = rand() % 100; // Số ngẫu nhiên 0-99
    int tong;
    //buoc 2 nhap du lieu 
    cout << "Tinh tong cua hai so sau: " << so1 << " + " << so2 << " = ? ";
    cin >> tong;
    //buoc 3 kiem tra 
    if (tong == (so1 + so2)) {
        cout << "Chuc mung! Ban da tinh dung.";
    } else {
        cout << "Sai roi! Ket qua dung la: " << (so1 + so2);
    }
    return 0;
}
