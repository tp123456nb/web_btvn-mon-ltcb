/*

7. Tính giờ (Bắt buộc)
Viết chương trình yêu cầu người dùng nhập vào số giây. Sau đó in ra khoảng thời gian
đó là mấy ngày, giờ, phút, giây.
Chú ý:
− Nếu số ngày bằng không thì không cần in ra số ngày
− Nếu số giờ bằng không thì không cần in ra số giờ
− Nếu số phút bằng không thì không cần in ra số phút
− Nếu số giây bằng không thì không cần in ra số giây
*/
//yeu cau nguoi dung nhap vao so giay ,in ra khoang thoi gian do la may ngay ,gio,phut,giay
//buoc 1 khai bao bien 
//buoc 2 nhap du lieu 
//buoc 3 chuyen doi so giay 
//buoc 4 kiem tra in ra ket qua 

#include <iostream>
using namespace std;
int main() {
	//buoc 1 khai bao bien 
    long long tongGiay;
    int ngay, gio, phut, giay;
    //buoc 2 nhap du lieu 
    cout << "Nhap so giay: ";
    cin >> tongGiay;
    //buoc 3 chuyen doi so giay 
    ngay = tongGiay / 86400;          // 1 ngay = 86400 giay
    tongGiay %= 86400;
    gio = tongGiay / 3600;            // 1 gio = 3600 giay
    tongGiay %= 3600;
    phut = tongGiay / 60;             // 1 phut = 60 giay
    giay = tongGiay % 60;
    cout << "Thoi gian tuong ung: ";
    //buoc 4 kiem tra in ra ket qua
    if (ngay > 0)
        cout << ngay << " ngay ";
    if (gio > 0)
        cout << gio << " gio ";
    if (phut > 0)
        cout << phut << " phut ";
    if (giay > 0)
        cout << giay << " giay ";
    return 0;
}
