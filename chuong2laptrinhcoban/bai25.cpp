/*
//18. Lãi suất kiếm được
//Giả sử không có khoản tiền gửi nào ngoài khoản đầu tư ban đầu, số dư trong tài 
//khoản tiết kiệm sau một năm có thể được tính theo công thức :
//Amount = Principal* (1 +rate/t)t
//Trong đó, Principal là số dư trong tài khoản tiết kiệm, Rate là lãi suất, và T là số lần 
//tính lãi gộp trong một năm (T là 4 nếu lãi gộp hàng quý).
//Viết một chương trình yêu cầu tiền gốc, lãi suất và số lần lãi gộp. Nó sẽ hiển thị một 
//báo cáo tương tự như:
//Interest Rate:4.25%
//Times Compounded:12
//Principal:$1000.00
//Interest:$43.34
//Amount in Savings:$1043.34
*/
//buoc 1 khai bao bien 
//buoc 2 nhap du lieu 
//buoc 3 tinh 
//tong tien sau mot nam =principal * pow(1 + rate / times, times)
//tien lai =tong tien sau mot nam - principal
//buoc 4 in ra ket qua 
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double principal;     // Tiền gốc
    double rate;          // Lãi suất (%)
    int times;            // Số lần tính lãi trong năm
    double amount;        // Tổng tiền sau 1 năm
    double interest;      // Tiền lãi
    // Nhập dữ liệu
    cout << "Nhap lai suat hang nam (%): ";
    cin >> rate;
    cout << "Nhap so lan tinh lai trong nam: ";
    cin >> times;
    cout << "Nhap so tien goc: ";
    cin >> principal;
    // Chuyển lãi suất sang dạng thập phân
    rate = rate / 100;
    // Tính tổng tiền sau 1 năm
    amount = principal * pow(1 + rate / times, times);
    // Tính tiền lãi
    interest = amount - principal;
    // Định dạng kết quả
    cout << fixed << setprecision(2);
    cout << "Interest Rate:        " << rate * 100 << "%" << endl;
    cout << "Times Compounded:     " << times << endl;
    cout << "Principal:            $" << principal << endl;
    cout << "Interest:             $" << interest << endl;
    cout << "Amount in Savings:    $" << amount << endl;
    return 0;
}

