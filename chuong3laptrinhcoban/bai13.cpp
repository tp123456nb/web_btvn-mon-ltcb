/*
13. Câu lạc bộ sách
Một hiệu sách tính điểm thưởng cho người mua tùy theo số sách khách hàng đã mua
như sau:
− 0 cuốn sách → 0 điểm
− 1 cuốn sách → 5 điểm
− 2 cuốn sách → 15 điểm
− 3 cuốn sách → 30 điểm
− từ 4 cuốn sách trở lên → 60 điểm
Viết chương trình nhập vào số sách của 1 khách hàng và in ra số điểm thưởng của họ
là bao nhiêu.
*/
//yeu cau 
//buoc 1 khai bao bien
//buoc 2 nhap du lieu
//buoc 3 so snh kiem tra 


#include <iostream>
using namespace std;
int main() {
	//buoc 1 khai bao bien
    int soSach;
    int diemThuong;
    //buoc 2 nhap du lieu
    cout << "Nhap so sach khach hang da mua: ";
    cin >> soSach;
    //buoc 3 so snh kiem tra 
    if (soSach < 0) {
        cout << "So sach khong hop le!";
    }
    else if (soSach == 0) {
        diemThuong = 0;
        cout << "So diem thuong: " << diemThuong;
    }
    else if (soSach == 1) {
        diemThuong = 5;
        cout << "So diem thuong: " << diemThuong;
    }
    else if (soSach == 2) {
        diemThuong = 15;
        cout << "So diem thuong: " << diemThuong;
    }
    else if (soSach == 3) {
        diemThuong = 30;
        cout << "So diem thuong: " << diemThuong;
    }
    else {
        diemThuong = 60;
        cout << "So diem thuong: " << diemThuong;
    }
    return 0;
}
