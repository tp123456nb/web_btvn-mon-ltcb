/*

//8. Có bao nhiêu vật dụng?
//Công ty Yukon Widget sản xuất các vật dụng nặng 12,5 pound mỗi vật. Viết chương 
//trình tính toán có bao nhiêu vật dụng được xếp trên một tấm bảng pallet, dựa trên 
//tổng trọng lượng của pallet. Chương trình sẽ hỏi người dùng xem pallet nặng bao 
//nhiêu và trọng lượng của pallet với các vật dụng được xếp chồng lên nhau. Sau đó, 
//nó sẽ tính toán và hiển thị số lượng vật dụng được xếp chồng lên nhau trên pallet.
*/
//yeu cau tinh co bao nhieu vat dung duoc xep tren mot tam bang pallet
//buoc 1 khai bao bien Biet rang moi vat dung nang 12.5 pound.
//buoc 2 nhap trong luong 
//buoc 3  Tong trong luong cua cac vat dung=Trong luong vat dung = trong luong đay – trong luong rong
//So vat dung = trong luong vat dung / 12.5.
//buoc 4 in ra ket qua 

#include <iostream>
using namespace std;
int main() {
    const double trongluongsanpham = 12.5;
    double Palletrong, Palletday;
    cout << "Nhap trong luong pallet rong (pound): ";
    cin >>Palletrong;
    cout << "Nhap trong luong pallet + vat dung (pound): ";
    cin >>Palletday;
    // Tính tổng trọng lượng vật dụng
    double tongtrongluong = Palletday - Palletrong;
    // Tính số lượng vật dụng
    int soluongvatdung = tongtrongluong / trongluongsanpham;
    cout << "So luong vat dung tren pallet la: " << soluongvatdung << endl;
    return 0;
}
