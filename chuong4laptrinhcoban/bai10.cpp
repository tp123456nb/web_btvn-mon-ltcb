/*
10. Lượng mưa trung bình: (Bắt buộc)
Viết chương trình sử dụng các vòng lặp lồng nhau để thu thập dữ liệu và tính toán lượng
mưa trung bình trong một khoảng thời gian hàng năm. Đầu tiên chương trình nên hỏi
người dùng số năm. Vòng lặp bên ngoài sẽ lặp lại một lần cho mỗi năm. Vòng lặp bên
trong sẽ lặp lại 12 lần, mỗi tháng một lần. Mỗi lần lặp lại của vòng lặp bên trong sẽ hỏi
người dùng về lượng mưa trong tháng đó. Sau tất cả các lần lặp, chương trình sẽ hiển
thị số tháng, tổng lượng mưa và lượng mưa trung bình mỗi tháng trong toàn bộ thời kỳ
Xác thực đầu vào: Không chấp nhận số năm nhỏ hơn 1. Không chấp nhận số âm cho
lượng mưa hàng tháng.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int nam;
    double mua, luongmuatongcong = 0.0;
    int tongsothang = 0;
    // Nhập số năm
    cout << "Nhap so nam: ";
    cin >> nam;
    // Xác thực số năm
    while (nam < 1) {
        cout << "So nam phai lon hon hoac bang 1. Nhap lai: ";
        cin >> nam;
    }
    // Vòng lặp qua các năm
    for (int y = 1; y <= nam; y++) {
        cout << "\nNam " << y << ":\n";
        // Vòng lặp qua 12 tháng
        for (int m = 1; m <= 12; m++) {
            cout << "Nhap luong mua thang " << m << ": ";
            cin >> mua;
            // Xác thực lượng mưa
            while (mua < 0) {
                cout << "Luong mua khong duoc am. Nhap lai: ";
                cin >> mua;
            }
            luongmuatongcong += mua;
            tongsothang++;
        }
    }
    double luongmuatrungbinh = luongmuatongcong / tongsothang;
    // Hiển thị kết quả
    cout << "\nTong so thang: " << tongsothang << endl;
    cout << "Tong luong mua: " << fixed << setprecision(2) << luongmuatongcong << endl;
    cout << "Luong mua trung binh moi thang: " << fixed << setprecision(2) << luongmuatrungbinh << endl;
    return 0;
}
