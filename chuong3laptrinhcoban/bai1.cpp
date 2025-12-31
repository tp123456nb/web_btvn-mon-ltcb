/*
//1. Tìm Max/Min (Bắt buộc)
//Viết chương trình yêu cầu người dùng nhập vào hai số, sử dụng toán tử điều kiện (toán
//tử ? :) để in ra số lớn hơn và số nhỏ hơn trong 2 số.
*/
//yeu cau viet chuong trinh yeu cau nguoi dung nhap vao hai so 
// buoc 1 khai bao bien 
// buoc 2 nhap du lieu 
//buoc 3 xac dinh so lon hon ,so nho hon 
//buoc 4 in ra ket qua 

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap so thu hai: ";
    cin >> b;
    int max = (a > b) ? a : b;
    int min = (a < b) ? a : b;
    cout << "So lon hon (Max): " << max << endl;
    cout << "So nho hon (Min): " << min << endl;
    return 0;
}
