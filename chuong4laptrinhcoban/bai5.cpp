/*
5. Tăng phí thành viên
Một câu lạc bộ, hiện thu phí 2.500 đô la mỗi năm cho các thành viên và đã thông báo
sẽ tăng phí thành viên lên 4% mỗi năm trong 6 năm tới. Viết chương trình sử dụng một
vòng lặp để hiển thị mức phí dự kiến trong 6 năm tới.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double phiThanhVien = 2500.0;
    const double tiLeTang = 0.04;
    cout << "Nam\tPhi thanh vien (USD)" << endl;
    cout << "---------------------------" << endl;
    for (int nam = 1; nam <= 6; nam++) {
        phiThanhVien = phiThanhVien * (1 + tiLeTang);
        cout << nam << "\t" << fixed << setprecision(2)
             << phiThanhVien << endl;
    }
    return 0;
}
