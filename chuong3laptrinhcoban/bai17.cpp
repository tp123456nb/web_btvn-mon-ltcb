/*
17. Cá nhân tốt nhất
Viết chương trình yêu cầu nhập tên vận động viên nhảy sào, ngày thi đấu, chiều cao
nhảy (được tính bằng mét) của 3 vận động viên có thành tích tốt nhất. Sau đó chương
trình sẽ hiển thị danh sách theo thứ tự thành tích đạt được.
Xác thực đầu vào: Chỉ chấp nhận các giá trị từ 2.0m đến 5.0m cho các chiều cao
*/

//yeu cau Viết chương trình cho phép nhập thông tin của 3 vận động viên nhảy sào có thành tích tốt nhất, bao gồm:
//Tên vận động viên
//Ngày thi đấu
//Chiều cao nhảy (đơn vị: mét)
//buoc 1 khai bao bien 
//buoc 2 nhap du lieu 
//buoc 3 xac thuc du lieu dau vao
//chi chap nhan chieu cao tu 2.0m den 5.0 m
//neu nhap sai  → bao loi va ket thuc chuong trinh .

#include <iostream>
#include <string>
using namespace std;
int main() {
    string ten[3], ngayThi[3];
    double chieuCao[3];
    // Nhap thong tin
    for (int i = 0; i < 3; i++) {
        cout << "Nhap ten van dong vien thu " << i + 1 << ": ";
        cin >> ten[i];
        cout << "Nhap ngay thi dau: ";
        cin >> ngayThi[i];
        cout << "Nhap chieu cao nhay (m): ";
        cin >> chieuCao[i];
        // Kiem tra chieu cao hop le
        if (chieuCao[i] < 2.0 || chieuCao[i] > 5.0) {
            cout << "Loi! Chieu cao phai nam trong khoang 2.0m den 5.0m.";
            return 0;
        }
    }
    // Sap xep theo chieu cao giam dan (bubble sort don gian)
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (chieuCao[i] < chieuCao[j]) {
                swap(chieuCao[i], chieuCao[j]);
                swap(ten[i], ten[j]);
                swap(ngayThi[i], ngayThi[j]);
            }
        }
    }
    // Hien thi ket qua
    cout << "\nDanh sach xep hang theo thanh tich:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Hang " << i + 1 << ": "
             << ten[i]
             << " | Ngay thi: " << ngayThi[i]
             << " | Chieu cao: " << chieuCao[i] << " m" << endl;
    }
    return 0;
}
