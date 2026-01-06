/*
11. Quần thể
Viết chương trình dự đoán số lượng sinh vật trong một quần thể. Chương trình phải hỏi
người dùng về số lượng sinh vật ban đầu, mức tăng trung bình hàng ngày của quần thể
(theo phần trăm) và số ngày chúng sẽ nhân lên. Một vòng lặp sẽ hiển thị số lượng sinh
vật cho mỗi ngày.
Xác thực đầu vào:
− Không chấp nhận số lượng ban đầu một số nhỏ hơn 2.
− Không chấp nhận mức tăng trung bình âm.
− Không chấp nhận số ngày chúng sẽ nhân lên nhỏ hơn 1.
*/
//buoc 1 khai bao bien 
//buoc 2 nhap du lieu 
//buoc 3 tinh so luong moi = so luong hien tai *(1+tyle/100)
//buoc 4 hien thi ket qua 

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int dansobandau, ngay;
    double giatanghangngay, danso;
    // Nhập số lượng sinh vật ban đầu
    cout << "Nhap so luong sinh vat ban dau: ";
    cin >> dansobandau;
    while (dansobandau < 2) {
        cout << "So luong ban dau phai lon hon hoac bang 2. Nhap lai: ";
        cin >> dansobandau;
    }
    // Nhập mức tăng trung bình hàng ngày (%)
    cout << "Nhap muc tang trung binh hang ngay (theo %): ";
    cin >> giatanghangngay;
    while (giatanghangngay < 0) {
        cout << "Muc tang khong duoc am. Nhap lai: ";
        cin >> giatanghangngay;
    }
    // Nhập số ngày
    cout << "Nhap so ngay: ";
    cin >> ngay;
    while (ngay < 1) {
        cout << "So ngay phai lon hon hoac bang 1. Nhap lai: ";
        cin >> ngay;
    }
    danso = dansobandau;
    // Hiển thị tiêu đề
    cout << "\nNgay\tSo luong sinh vat\n";
    cout << "-----------------------------\n";
    // Vòng lặp tính toán và hiển thị số lượng từng ngày
    for (int i = 1; i <= ngay; i++) {
        cout << i << "\t" << fixed << setprecision(2) << danso << endl;
        danso = danso * (1 + giatanghangngay / 100);
    }
    return 0;
}

