/*
2. Các ký tự mã ASCII
Viết chương trình sử dụng vòng lặp để hiển thị các ký tự cho các mã ASCII từ 0 đến
127. Hiển thị 16 ký tự trên mỗi dòng.
*/
#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i <= 127; i++) {
        cout << i << ": " << char(i) << "\t";
        // Sau mỗi 16 ký tự thì xuống dòng
        if ((i + 1) % 16 == 0) {
            cout << endl;
        }
    }
    return 0;
}
