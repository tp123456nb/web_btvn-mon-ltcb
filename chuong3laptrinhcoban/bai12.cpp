/*
12. Bán phần mềm
Một công ty phần mềm bán gói hàng sản phẩm giá $99. Mức chiết khấu số lượng theo
bảng sau.
Số lượng Chiết khấu
10-19 20%
20-49 30%
50-99 40%
Trên 100 50%
Viết một chương trình yêu cầu số lượng đơn vị bán và tính tổng chi phí mua.
*/
//yeu cau viet mot chuong trinh so luong don vi va tong chi phi mua 
//buoc 1 khai bao bien 
//buoc 2 nhap du lieu 
//buoc 3 kiem tra so sanh 
//buoc 4 in ra ket qua 
#include <iostream>
using namespace std;
int main() {
	//buoc 1 khai bao bien 
    int soLuong;
    const double GIA = 99.0;
    double tyLeGiam = 0.0;
    double tongTien, tienGiam, thanhTien;
    //buoc 2 nhap du lieu 
    cout << "Nhap so luong don vi mua: ";
    cin >> soLuong;
    //buoc 3 kiem tra so sanh 
    if (soLuong < 0) {
        cout << "So luong khong hop le!";
        return 0;
    }
    // Xac dinh ty le chiet khau
    if (soLuong >= 100)
        tyLeGiam = 0.5;
    else if (soLuong >= 50)
        tyLeGiam = 0.4;
    else if (soLuong >= 20)
        tyLeGiam = 0.3;
    else if (soLuong >= 10)
        tyLeGiam = 0.2;
    else
        tyLeGiam = 0.0;
    tongTien = soLuong * GIA;
    tienGiam = tongTien * tyLeGiam;
    thanhTien = tongTien - tienGiam;
    //buoc 4 in ra ket qua 
    cout << "Tong tien ban dau: $" << tongTien << endl;
    cout << "So tien giam: $" << tienGiam << endl;
    cout << "Tong chi phi phai tra: $" << thanhTien << endl;
    return 0;
}
