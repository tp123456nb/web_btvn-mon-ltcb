/*
2. Chuyển đổi số La Mã
Viết chương trình yêu cầu người dùng nhập vào một số tự nhiên trong khoảng từ 1 đến
10, sử dụng câu lệnh switch để in ra dạng số La Mã tương ứng của số đó.
Chú ý: kiểm tra đầu vào, không chấp nhận các số nhỏ hơn 1 hoặc lớn hơn 10.
*/
//yeu cau 
// viet chuong trinh cho phep nguoi dung nhap vao mot so tu nhien.
//so nhap vao phai nam trong kgoang tu 1 den 10 .
//Su dung cau lenh switch…case đe:
//In ra dang so La Ma tuong ung.
//Kiem tra du lieu đau vao:
//Khong chap nhan so nho hon 1 hoặc lon hơn 10.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Nhap mot so tu nhien (1 - 10): ";
    cin >> n;

    switch (n) {
        case 1:  cout << "So La Ma: I"; break;
        case 2:  cout << "So La Ma: II"; break;
        case 3:  cout << "So La Ma: III"; break;
        case 4:  cout << "So La Ma: IV"; break;
        case 5:  cout << "So La Ma: V"; break;
        case 6:  cout << "So La Ma: VI"; break;
        case 7:  cout << "So La Ma: VII"; break;
        case 8:  cout << "So La Ma: VIII"; break;
        case 9:  cout << "So La Ma: IX"; break;
        case 10: cout << "So La Ma: X"; break;
        default:
            cout << "Gia tri khong hop le! Vui long nhap so tu 1 den 10.";
    }
    return 0;
}
