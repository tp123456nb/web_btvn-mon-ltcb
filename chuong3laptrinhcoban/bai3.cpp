/*
3. Ngày phép thuật (Bắt buộc)
Ngày 10 tháng 6 năm 1960 được viết dưới dạng 6/10/60 có đặc điểm là tháng nhân với
ngày thì bằng năm (chỉ tính 2 chữ số cuối của năm) thì được coi là ngày phép thuật
Viết chương trình yêu cầu người dùng nhập vào ngày, tháng, năm (chỉ nhập 2 chữ số
cuối). In ra ngày đó có phải là ngày phép thuật không?
*/
//yeu cau
//Viet chuong trinh cho phep nguoi dung nhap vao:
//Ngay
//Thang
//Nam (chi nhap 2 chu so cuoi cua nam)
//buoc 1 khai bao bien 
//buoc 2 nhap gia tri bien 
//buoc 3 kiem tra 


#include <iostream>
using namespace std;
int main() {
    int ngay, thang, nam;
    cout << "Nhap ngay: ";
    cin >> ngay;
    cout << "Nhap thang: ";
    cin >> thang;
    cout << "Nhap nam (2 chu so cuoi): ";
    cin >> nam;
    if (ngay * thang == nam) {
        cout << "Day la ngay phep thuat!";
    } else {
        cout << "Day khong phai la ngay phep thuat!";
    }
    return 0;
}
