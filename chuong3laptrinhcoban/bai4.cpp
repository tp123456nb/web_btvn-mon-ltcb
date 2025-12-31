/*
4. Diện tích hình chữ nhật
Viết chương trình yêu cầu người dùng nhập chiều dài và rộng của 2 hình chữ nhật. sau
đó cho biết hình nào có diện tích lớn hơn, nếu bằng nhau thì thông báo bằng nhau
*/
//yeu cau nguoi dung nhap chieu dai va rong cua 2 hinh chu nhat 
//buoc 1 khai bao bien 
//buoc 2 nhap du lieu 
//buoc 3 tinh dien tich cua moi hinh chu nhat 
//buoc 4 So sanh dien tich hai hinh :
//thong bao hinh nao co dien tich lon hon 
//neu hai dien tich bang nhau ,bat thong bao hai hinh cos dien tich bang nhau 

#include <iostream>
using namespace std;
int main() {
	//buoc 1 khai bao bien 
    float dai1, rong1, dai2, rong2;
    float dientich1, dientich2;
    //buoc  nhap du lieu
    cout << "Nhap chieu dai hinh chu nhat thu nhat: ";
    cin >> dai1;
    cout << "Nhap chieu rong hinh chu nhat thu nhat: ";
    cin >> rong1;
    cout << "Nhap chieu dai hinh chu nhat thu hai: ";
    cin >> dai2;
    cout << "Nhap chieu rong hinh chu nhat thu hai: ";
    cin >> rong2;
    //buoc 3 tinh dien tich hai hinh
    dientich1 = dai1 * rong1;
    dientich2 = dai2 * rong2;
    // buoc 4 so sanh dua ra ket qua 
    if (dientich1 > dientich2) {
        cout << "Hinh chu nhat thu nhat co dien tich lon hon.";
    } else if (dientich1 < dientich2) {
        cout << "Hinh chu nhat thu hai co dien tich lon hon.";
    } else {
        cout << "Hai hinh chu nhat co dien tich bang nhau.";
    }
    return 0;
}
