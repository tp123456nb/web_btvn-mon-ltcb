/*
8. Gia sư Toán (Bắt buộc)
Viết chương trình hiển thị ngẫu nhiên 2 số, sau đó hiện thị thực đơn cho người dùng
lựa chọn phép toán: cộng, trừ, nhân, chia và chức năng thoát. Nếu người dùng chọn
cộng thì chương trình thực hiện tính tổng 2 số ngẫu nhiên, tương tự với các phép toán.
Sau khi người dùng hoàn thành bài toán, chương trình sẽ hiển thị lại thực đơn để người
dùng có thể lựa chọn phép toán khác. Quá trình này được lặp lại cho đến khi người
dùng chọn thoát khỏi chương trình.
Xác thực đầu vào: Nếu người dùng chọn một mục không có trong thực đơn, hiển thị
thông báo lỗi và hiển thị lại thực đơn.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int luachon;
    int so1, so2;
    // Khởi tạo số ngẫu nhiên
    srand(time(0));
    do {
        // Sinh 2 số ngẫu nhiên từ 1 đến 10
        so1 = rand() % 10 + 1;
        so2 = rand() % 10 + 1;
        cout << "\nHai so ngau nhien la: " << so1 << " va " << so2 << endl;
        // Hiển thị menu
        cout << "\n===== MENU =====\n";
        cout << "1. Cong\n";
        cout << "2. Tru\n";
        cout << "3. Nhan\n";
        cout << "4. Chia\n";
        cout << "5. Thoat\n";
        cout << "Lua chon cua ban: ";
        cin >>luachon;
        switch (luachon) {
            case 1:
                cout << "Tong = " << so1 + so2 << endl;
                break;
            case 2:
                cout << "Hieu = " << so1 - so2 << endl;
                break;
            case 3:
                cout << "Tich = " << so1 * so2 << endl;
                break;
            case 4:
                cout << "Thuong = " << (float)so1 / so2 << endl;
                break;
            case 5:
                cout << "Thoat chuong trinh.\n";
                break;
            default:
                cout << "Lua chon khong hop le! Vui long chon lai.\n";
        }
    } while (luachon != 5);
    return 0;
}

