/*
14. Xếp hàng học sinh
Một giáo viên đã yêu cầu tất cả học sinh của mình xếp hàng theo tên của họ. Ví dụ,
trong một lớp học, Amy sẽ đứng đầu hàng, và Yolanda sẽ đứng cuối. Viết chương trình
nhắc người dùng nhập số lượng học sinh trong lớp, sau đó lặp lại để đọc (nhập) tên tên
từng học sinh. Khi tất cả các tên đã được đọc, nó sẽ báo cáo học sinh nào sẽ ở đầu hàng
và học sinh nào sẽ ở cuối hàng. Giả sử rằng không có hai học sinh nào trùng tên.
Xác thực đầu vào: Không chấp nhận số lượng học sinh nhỏ hơn 1 hoặc lớn hơn 25.
*/

#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    string name;
    string first, last;
    // Nhập số lượng học sinh
    do {
        cout << "Nhap so luong hoc sinh (1 - 25): ";
        cin >> n;
    } while (n < 1 || n > 25);
    cin.ignore(); // Xóa ký tự xuống dòng
    // Nhập tên học sinh đầu tiên
    cout << "Nhap ten hoc sinh thu 1: ";
    getline(cin, name);
    first = last = name;
    // Nhập các tên còn lại
    for (int i = 2; i <= n; i++) {
        cout << "Nhap ten hoc sinh thu " << i << ": ";
        getline(cin, name);
        if (name < first)
            first = name;
        if (name > last)
            last = name;
    }
    // In kết quả
    cout << "\nHoc sinh dung dau hang: " << first << endl;
    cout << "Hoc sinh dung cuoi hang: " << last << endl;
    return 0;
}
