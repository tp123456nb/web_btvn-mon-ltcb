/*
4. Lượng calo bị đốt cháy (Bắt buộc)
Chạy trên một máy chạy bộ cụ thể, bạn đốt cháy 3,6 calo mỗi phút. Viết chương trình sử
dụng vòng lặp để hiển thị số calo đã đốt cháy sau 5, 10, 15, 20, 25 và 30 phút.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const double caloMoiPhut = 3.6;
    double caloDaDot;
    cout << "Phut\tCalo da dot" << endl;
    cout << "--------------------" << endl;
    for (int phut = 5; phut <= 30; phut += 5) {
        caloDaDot = phut * caloMoiPhut;
        cout << phut << "\t" << fixed << setprecision(1) << caloDaDot << endl;
    }
    return 0;
}
