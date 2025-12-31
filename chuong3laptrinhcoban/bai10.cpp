/*
10. Số ngày của 1 tháng (Bắt buộc)
Viết chương trình yêu cầu người dùng nhập tháng và năm, cho biết tháng đó có bao
nhiêu ngày. Sử dụng tiêu chí sau để xác định năm nhuận:
 Xác định xem năm có chia hết cho 100 hay không. Nếu đó là một năm nhuận nếu
và chỉ nếu năm đó chia hết cho 400. Ví dụ, 2000 là năm nhuận nhưng 2100 không
phải năm nhuận.
- Nếu năm không chia hết cho 100 thì đó là năm nhuận nếu và chỉ nếu năm đó chia
hết 4. Ví dụ, năm 2008 là năm nhuận nhưng năm 2009 không phải năm nhuận.
Dưới đây và ví dụ chương trình trình chạy:
Nhập vào 1 tháng (1-12): 2 [Enter]
Nhập vào 1 năm: 2008 [Enter]
Số ngày: 29
*/


#include <iostream>
using namespace std;
int main() {
    int thang, nam;
    int soNgay;
    cout << "Nhap vao 1 thang (1-12): ";
    cin >> thang;
    cout << "Nhap vao 1 nam: ";
    cin >> nam;
    bool namNhuan;
    // Xác định năm nhuận
    if (nam % 100 == 0) {
        namNhuan = (nam % 400 == 0);
    } else {
        namNhuan = (nam % 4 == 0);
    }
    // Xác định số ngày của tháng
    switch(thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            soNgay = 31; break;
        case 4: case 6: case 9: case 11:
            soNgay = 30; break;
        case 2:
            soNgay = namNhuan ? 29 : 28; break;
        default:
            soNgay = 0; // Tháng không hợp lệ
    }
    if (soNgay != 0)
        cout << "So ngay: " << soNgay << endl;
    else
        cout << "Thang nhap vao khong hop le!" << endl;
    return 0;
}
