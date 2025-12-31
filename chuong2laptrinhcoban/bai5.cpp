/*
//5. Tỉ lệ nam và nữ
//Viết một chương trình yêu cầu người dùng nhập vào số lượng người nam và số lượng 
//người nữ của một lớp. Chương trình sẽ hiển thị tỉ lệ phần trăm của nam và nữ ra màn hình.
//Gợi ý: Giả sử có 8 nam và 12 nữ trong một lớp. Do đó tổng sĩ số của lớp là 20. Tỉ lệ
//phần trăm của nam có thể được tính bằng công thức 8 : 20 = 0.4 hoặc 40 phần trăm. Tỉ
//lệ phần trăm của nữ có thể được tính bằng công thức 12 : 20 = 0.6 hoặc 60 phần trăm.
*/
//Viết một chương trình thực hiện các công việc sau:
//Yêu cầu người dùng nhập vào:
//Số lượng nam trong lớp
//Số lượng nữ trong lớp
//buoc 1 khai bao bien 
//buioc 2 nhap du lieu 
//buoc 3 tinh tong si so cua lop =nam +nu 
//tinh ty le phan tram :
//	ty le nam =(nam/tong)*100
//	ty le nu =(nu/tong)*100
//buoc 4 hien thi ket qua 

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int nam, nu;
    int tong;
    double tylephantramnam, tylephantramnu;
    // Nhập số lượng nam và nữ
    cout << "Nhap so luong nam: ";
    cin >> nam;
    cout << "Nhap so luong nu: ";
    cin >> nu;
    // Tính tổng sĩ số
    tong = nam + nu;
    // Tính tỉ lệ phần trăm
    tylephantramnam = (double)nam / tong * 100;
    tylephantramnu= (double)nu / tong * 100;
    // Định dạng kết quả
    cout << fixed << setprecision(2);
    // Xuất kết quả
    cout << "Ti le nam: " << tylephantramnam << "%" << endl;
    cout << "Ti le nu: " <<  tylephantramnu << "%" << endl;
    return 0;
}
