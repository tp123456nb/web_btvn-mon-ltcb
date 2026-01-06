/*
19. Phân tích ngân sách:
Viết một chương trình yêu cầu người dùng nhập số tiền mà họ đã lập ngân sách cho
một tháng. Sau đó, một vòng lặp sẽ hỏi người dùng nhập từng chi phí của họ trong
tháng và tổng số tiền hiện có. Khi vòng lặp kết thúc, chương trình sẽ hiển thị số tiền mà
người dùng vượt quá hoặc dư ngân sách
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double ngansach, chiphi, tongchiphi = 0.0;
    // Nhập ngân sách
    cout << "Nhap so tien ngan sach thang: ";
    cin >> ngansach;
    while (ngansach < 0) {
        cout << "Ngan sach phai >= 0. Nhap lai: ";
        cin >> ngansach;
    }
    cout << "Nhap cac khoan chi tieu (nhap -1 de ket thuc):\n";
    while (true) {
        cout << "Nhap chi phi: ";
        cin >> chiphi;
        if (chiphi == -1) {
            break; // Kết thúc vòng lặp
        }
        if (chiphi < 0) {
            cout << "Chi phi phai >= 0. Nhap lai.\n";
            continue;
        }
        tongchiphi += chiphi;
    }
    cout << fixed << setprecision(2);
    cout << "\nTong chi tieu: $" << tongchiphi << endl;
    if (tongchiphi < ngansach) {
        cout << "Ban con du: $" << (ngansach - tongchiphi) << endl;
    } else if (tongchiphi > ngansach) {
        cout << "Ban vuot qua ngan sach: $" << (tongchiphi - ngansach) << endl;
    } else {
        cout << "Ban da dung dung ngan sach.\n";
    }
    return 0;
}

