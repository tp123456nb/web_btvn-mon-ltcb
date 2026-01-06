/*
21. Cải tiến thêm ở bài 20:
Nâng cao chương trình mà bạn đã viết cho bài 20 để nó lưu giữ số lần người dùng đoán.
Khi người dùng đoán đúng số ngẫu nhiên, chương trình sẽ hiển thị số người đoán.
*/

#include <iostream>
#include <cstdlib> // srand, rand
#include <ctime>   // time
using namespace std;
int main() {
    int sobimat, doan;
    int solandoan = 0; // Biến đếm số lần đoán
    // Khởi tạo số ngẫu nhiên
    srand(time(0));
    sobimat = rand() % 100 + 1; // Số từ 1 đến 100
    cout << "Chao mung den voi tro choi doan so!\n";
    cout << "Doan mot so tu 1 den 100.\n";
    do {
        cout << "Nhap so doan cua ban: ";
        cin >> doan;
        solandoan++; // Tăng số lần đoán
        if (doan > sobimat) {
            cout << "Rat cao, hay thu lai!\n";
        } else if (doan < sobimat) {
            cout << "Rat thap, hay thu lai!\n";
        } else {
            cout << "Chuc mung! Ban da doan dung so.\n";
            cout << "So lan ban da doan: " << solandoan << endl;
        }
    } while (doan != sobimat);
    return 0;
}
