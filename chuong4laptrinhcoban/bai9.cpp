/*
9. Người ở khách sạn
Viết chương trình tính tỷ lệ % sử dụng phòng trong khách sạn. Chương trình bắt đầu
bằng cách hỏi người dùng xem khách sạn có bao nhiêu tầng. Sau đó, một vòng lặp sẽ
lặp lại một lần cho mỗi tầng. Trong mỗi lần lặp, sẽ hỏi người dùng về số lượng phòng
trong tầng và bao nhiêu phòng trong số đó được sử dụng. Sau tất cả các lần lặp lại,
chương trình sẽ hiển thị khách sạn có bao nhiêu phòng, bao nhiêu phòng trong số đó
đang được sử dụng, bao nhiêu phòng chưa sử dụng và tỷ lệ phòng có người. Tỷ lệ phần
trăm có thể được tính bằng cách chia số phòng sử dụng cho tổng số phòng.
Theo truyền thống, hầu hết các khách sạn không có tầng mười ba. Vòng lặp trong
chương trình này nên bỏ qua lần lặp thứ mười ba.
Xác thực đầu vào: Không chấp nhận giá trị số tầng nhỏ hơn 1. Không chấp nhận số
lượng phòng ít hơn 10 trên một tầng.
*/
//buoc 1 khai bao bien 
//buoc 2 nhap du lieu 
//buoc 3 tinh ty le =( sophongdangdung/tongsophong )*100
//buoc 4 in ra ket qua 

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int tang;
    int phong,phongdasudung;
    int tongsophong = 0;
    int tongphongdasudung = 0;
    // Nhập số tầng
    cout << "Nhap so tang cua khach san: ";
    cin >> tang;
    // Xác thực số tầng
    while (tang < 1) {
        cout << "So tang phai lon hon hoac bang 1. Nhap lai: ";
        cin >> tang;
    }
    // Vòng lặp qua các tầng
    for (int i = 1; i <= tang; i++) {
        // Bỏ qua tầng 13
        if (i == 13)
            continue;
        cout << "\nTang " << i << endl;
        // Nhập số phòng
        cout << "Nhap so phong: ";
        cin >> phong;
        while (phong < 10) {
            cout << "So phong phai it nhat la 10. Nhap lai: ";
            cin >> phong;
        }
        // Nhập số phòng đang sử dụng
        cout << "Nhap so phong dang duoc su dung: ";
        cin >>phongdasudung;
        while (phongdasudung < 0 || phongdasudung > phong) {
            cout << "So phong su dung khong hop le. Nhap lai: ";
            cin >>phongdasudung;
        }
        tongsophong += phong;
        tongphongdasudung += phongdasudung;
    }
    int phongchuasudung = tongsophong - tongphongdasudung;
    double rate = (double)tongphongdasudung / tongsophong * 100;
    // Hiển thị kết quả
    cout << "\n===== THONG KE KHACH SAN =====\n";
    cout << "Tong so phong: " << tongsophong << endl;
    cout << "So phong dang su dung: " << tongphongdasudung << endl;
    cout << "So phong chua su dung: " << phongchuasudung << endl;
    cout << "Ty le su dung phong: "
         << fixed << setprecision(2) << rate << "%\n";
    return 0;
}
