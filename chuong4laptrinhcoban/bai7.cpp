/*
7. Đồng để thanh toán
Viết một chương trình tính toán số tiền một người sẽ kiếm được trong một khoảng thời
gian nếu tiền lương của họ là một xu vào ngày đầu tiên và hai xu vào ngày thứ hai, và
tiếp tục tăng gấp đôi mỗi ngày. Chương trình sẽ hỏi người dùng về số ngày. Hiển thị
bảng hiển thị số tiền lương cho mỗi ngày, sau đó hiển thị tổng tiền lương vào cuối kỳ.
Đầu ra phải được hiển thị bằng số đô la, không phải số xu.
Xác thực đầu vào:: Không chấp nhận số ngày nhỏ hơn 1 cho số ngày làm việc và 100
xu = 1 đô la.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int days;
    long double salary = 1;   // lương ngày đầu (xu)
    long double total = 0;    // tổng lương (xu)
    // Nhập số ngày
    cout << "Nhap so ngay lam viec: ";
    cin >> days;
    // Xác thực dữ liệu
    while (days < 1) {
        cout << "So ngay phai lon hon hoac bang 1. Nhap lai: ";
        cin >> days;
    }
    // Tiêu đề bảng
    cout << "\nBang tien luong\n";
    cout << "-----------------------------\n";
    cout << "Ngay\tTien luong ($)\n";
    // Tính và hiển thị lương
    for (int i = 1; i <= days; i++) {
        cout << i << "\t"
             << fixed << setprecision(2)
             << salary / 100 << endl;
        total += salary;
        salary *= 2;
    }
    // Hiển thị tổng tiền
    cout << "-----------------------------\n";
    cout << "Tong tien luong: $"
         << fixed << setprecision(2)
         << total / 100 << endl;
    return 0;
}
