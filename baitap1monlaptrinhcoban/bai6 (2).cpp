/*

6. Thanh toán hàng năm
Giả sử một nhân viên được trả lương hai tuần một lần và kiếm được 2.200 đô là mỗi 
kỳ lương. Trong một năm, nhân viên được trả 26 lần. Viết chương trình định nghĩa 
các biến sau đây: 
Chương trình tính toán tổng thanh toán hàng năm cho nhân viên bằng cách nhân số
tiền thanh toán mỗi lần với số kỳ lương được nhận trong một năm và lưu kết quả vào 
trong biến annualPay. Hiển thị tổng annualPay ra màn hình.
*/
//yeu cau mot nhan vien duoc tra luong 2.200 do la moi ky. 
// mot nam co 26 ku tra luong ( vi tra luong moi 2 tuan ).
// viet chuong trinh :  tong tien nhan tronng nam = tong tien nhan trong nam(2200) + so ky luong trong nam (26).
// in ra man hinh
//buoc 1 Xac đinh du lieu ban đau
//buoc 2 viet chuong trinh :  tong tien nhan tronng nam = tong tien nhan trong nam(2200) + so ky luong trong nam (26).
//buoc 3 in ra man hinh <<cout<<endl;

#include <iostream>
using namespace std;
int main (){
    // Khai báo các biến
    double sotienmoikyluong  = 2200;   // Số tiền mỗi kỳ lương
    int sokyluongmoinam  = 26;       // Số kỳ lương mỗi năm
    double tongthanhtoanhangnam ;          // Tổng thanh toán hàng năm

    // Tính tổng tiền lương trong năm
    tongthanhtoanhangnam = sotienmoikyluong * sokyluongmoinam;

    // Hiển thị kết quả
    cout << "Tong thanh toan hang nam cho nhan vien la: " 
    << tongthanhtoanhangnam  << " do la." << endl;
    return 0;
}