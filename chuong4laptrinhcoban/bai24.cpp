/*
24. Xử lý số - Sử dụng tệp (Bắt buộc)
Các bạn có thể lấy file random.txt trong tệp đính kèm trên trang elearning của bài tập.
Tệp này chứa một danh sách dài các số ngẫu nhiên. Sao chép tệp vào hệ thống của
bạn, sau đó viết chương trình mở tệp, đọc tất cả các số từ tệp và tính toán những điều
sau:
A. Số lượng các số trong tệp
B. Tổng của tất cả các số trong tệp
C. Giá trị trung bình của tất cả các số trong tệp
Chương trình sẽ hiển thị số lượng các số được tìm thấy trong tệp, tổng các số và giá trị
trung bình của các số.
*/

#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file;
    file.open("random.txt");
    if (!file) {
        cout << "Khong mo duoc tep random.txt!" << endl;
        return 1;
    }
    int count = 0;
    double sum = 0;
    double number;
    // Đọc từng số trong tệp
    while (file >> number) {
        sum += number;
        count++;
    }
    file.close();
    if (count == 0) {
        cout << "Tep khong co so nao!" << endl;
    } else {
        double average = sum / count;
        cout << "So luong cac so trong tep: " << count << endl;
        cout << "Tong cac so trong tep: " << sum << endl;
        cout << "Gia tri trung binh: " << average << endl;
    }
    return 0;
}

