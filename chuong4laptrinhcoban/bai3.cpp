/*
3. Mức độ của đại dương:
Giả sử mực nước biển hiện đang tăng khoảng 1,5 milimet mỗi năm, hãy viết một
chương trình hiển thị bảng hiển thị số milimet mà đại dương sẽ tăng lên mỗi năm trong
25 năm tới.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const double tocDoTang = 1.5; // mm mỗi năm
    double mucTang = 0;
    cout << "Nam\tMuc nuoc bien tang (mm)" << endl;
    cout << "----------------------------" << endl;
    for (int nam = 1; nam <= 25; nam++) {
        mucTang = nam * tocDoTang;
        cout << nam << "\t" << fixed << setprecision(1) << mucTang << endl;
    }
    return 0;
}
