/*
//6. Khối lượng và Trọng lượng
//Viết chương trình nhập vào cân nặng của đồ vật và in ra trọng lượng của nó. Nếu trọng
//lượng đạt trên 100 thì thông báo vật quá nặng, nếu trọng lượng nhỏ hơn 10 thì thông
//báo vật quá nhẹ. Biết trọng lượng của 1 vật được tính băng công thức lấy khối lượng
//(kg) nhân với 9.8.
*/
//yeu cau nhap vao can nang cua do vat va in ra trong luong cua no 
//buoc 1 khai bao bien 
//buoc 2 nhap du lieu 
//buoc 3 tinh trong luong =khoi luong nhan 9.8
//buoc 4 Kiem tra và thong bao:
//Neu trong luong > 100 → thông bao vat qua nang
//Neu trong luong < 10 → thông bao vat qua nhe

#include <iostream>
using namespace std;
int main() {
	//buoc 1 khai bao bien 
    float khoiLuong, trongLuong;
    //buoc 2 nhap du lieu 
    cout << "Nhap khoi luong cua vat (kg): ";
    cin >> khoiLuong;
    //buoc 3 tinh trong luong =khoi luong nhan 9.8
    trongLuong = khoiLuong * 9.8;
    cout << "Trong luong cua vat: " << trongLuong << endl;
    //buoc 4 Kiem tra và thong bao
    if (trongLuong > 100) {
        cout << "Vat qua nang!";
    } else if (trongLuong < 10) {
        cout << "Vat qua nhe!";
    } else {
        cout << "Trong luong vat o muc binh thuong.";
    }
    return 0;
}
