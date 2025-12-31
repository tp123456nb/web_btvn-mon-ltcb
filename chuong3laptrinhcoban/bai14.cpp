/*
15. Phí vận chuyển
Công ty vận tải hàng hóa nhanh thu phí sau:
Trọng lượng (Kilogram) Mức phí trên mỗi dặm
Nhỏ hơn 2kg $1.10
Từ 2kg → 6kg $2.20
Từ 6kg → 10kg $3.70
Từ 10kg → 20kg $4.80
Viết một chương trình yêu cầu trọng lượng của gói và khoảng cách để vận chuyển, sau
đó hiển thị các khoản phí.
Chú ý:
- Không chấp nhận giá trị 0 hoặc ít hơn cho trọng lượng của gói. Không chấp nhận
trọng lượng hơn 20 kg (đây là trọng lượng tối đa của công ty).
- Không chấp nhận khoảng cách dưới 10 dặm hoặc hơn 3. 000 dặm. Đây là khoảng
cách tối thiểu và tối đa của công ty.
*/
//yeu cau
//viet trinh chuing trinh yeu cau nguoi dung nhap :
//trong luong goi hang (kg)
//khoang cach van chuyen (dam)
//buoc 1 khai bao bien 
//buoc 2 nhap du lieu 
//buoc 3 tinh va hien thi tong phi 
//buoc 4  in ra ket qua 

#include <iostream>
using namespace std;
int main() {
	//buoc 1 khai bao bien
    double trongLuong, khoangCach;
    double phiMoiDam, tongPhi;
    //buoc 2 nhap du lieu 
    cout << "Nhap trong luong goi hang (kg): ";
    cin >> trongLuong;
    cout << "Nhap khoang cach van chuyen (dam): ";
    cin >> khoangCach;
    // Kiem tra du lieu dau vao
    if (trongLuong <= 0 || trongLuong > 20) {
        cout << "Trong luong khong hop le!";
        return 0;
    }
    if (khoangCach < 10 || khoangCach > 3000) {
        cout << "Khoang cach khong hop le!";
        return 0;
    }
    // Xac dinh muc phi tren moi dam
    if (trongLuong < 2)
        phiMoiDam = 1.10;
    else if (trongLuong < 6)
        phiMoiDam = 2.20;
    else if (trongLuong < 10)
        phiMoiDam = 3.70;
    else
        phiMoiDam = 4.80;
    //buoc 3 tinh va hien thi tong phi 
    tongPhi = phiMoiDam * khoangCach;
    //buoc 4  in ra ket qua
    cout << "Muc phi tren moi dam: $" << phiMoiDam << endl;
    cout << "Tong phi van chuyen: $" << tongPhi << endl;
    return 0;
}
