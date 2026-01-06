/*
25. Sử dụng file – Xếp hàng học sinh
Sửa đổi chương trình Đội hình sinh viên được mô tả trong Bài 14 để chương trình lấy
tên từ tệp. Tên nên được đọc cho đến khi không còn dữ liệu để đọc. Có thể sử dụng file
lineUp.txt trong tệp đính kèm trên trang elearning của bài tập.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream file("lineUp.txt");
    string name;
    string first, last;
    int count = 0;
    // Kiểm tra mở file
    if (!file) {
        cout << "Khong mo duoc file lineUp.txt!" << endl;
        return 1;
    }
    // Đọc tên đầu tiên
    if (getline(file, name)) {
        first = last = name;
        count++;
    }
    // Đọc các tên tiếp theo
    while (getline(file, name)) {
        if (name < first)
            first = name;
        if (name > last)
            last = name;
        count++;
    }
    file.close();
    // Kiểm tra số lượng học sinh
    if (count < 1 || count > 25) {
        cout << "So luong hoc sinh khong hop le (1 - 25)!" << endl;
        return 1;
    }
    // In kết quả
    cout << "Hoc sinh dung dau hang: " << first << endl;
    cout << "Hoc sinh dung cuoi hang: " << last << endl;
    return 0;
}
