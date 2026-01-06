/*
1. Tổng các số (Bắt buộc)
Viết chương trình yêu cầu người dùng nhập một giá trị nguyên dương. Chương trình
nên sử dụng một vòng lặp để lấy tổng của tất cả các số nguyên từ 1 đến số được nhập.
Ví dụ, nếu người dùng nhập 50, vòng lặp sẽ tìm tổng của 1, 2, 3, 4 ,. . ., 50. Biến đầu
vào: Không chấp nhận số âm.
*/

//yeu cau viet chuong trinh yeu cau nguoi dung nhap mot gia tri nguyen duong 
//buoc 1 khai bao bien 
//buoc 2 nhap du lieu 
//buoc 3 tinh tong tu 1 den n 
//buoc 4 in ra ket qua 

#include <iostream>
using namespace std;
int main() {
    int n;
    int tong = 0;
    // Nhập số nguyên dương
    do {
        cout << "Nhap mot so nguyen duong: ";
        cin >> n;
        if (n <= 0) {
            cout << "So khong hop le! Vui long nhap lai.\n";
        }
    } while (n <= 0);
    // Tính tổng từ 1 đến n
    for (int i = 1; i <= n; i++) {
        tong += i;
    }
    // Xuất kết quả
    cout << "Tong cac so tu 1 den " << n << " la: " << tong << endl;
    return 0;
}
