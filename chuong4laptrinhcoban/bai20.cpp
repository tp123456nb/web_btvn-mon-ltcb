/*
20. Trò chơi đoán số ngẫu nhiên:
Viết chương trình tạo một số ngẫu nhiên và yêu cầu người dùng đoán số đó là gì. Nếu
dự đoán của người dùng cao hơn số ngẫu nhiên, chương trình sẽ hiển thị "Rất cao, hãy
thử lại!" Nếu dự đoán của người dùng thấp hơn số ngẫu nhiên, chương trình sẽ hiển thị
"Rất thấp, hãy thử lại!" Chương trình nên sử dụng một vòng lặp lặp lại cho đến khi
người dùng đoán đúng số ngẫu nhiên.
*/

#include <iostream>
#include <cstdlib> // srand, rand
#include <ctime>   // time
using namespace std;
int main() {
    int sobimat, doan;
    // Khởi tạo số ngẫu nhiên
    srand(time(0));
    sobimat = rand() % 100 + 1; // Số từ 1 đến 100
    cout << "Chao mung den voi tro choi doan so!\n";
    cout << "Doan mot so tu 1 den 100.\n";
    do {
        cout << "Nhap so doan cua ban: ";
        cin >> doan;
        if (doan > sobimat) {
            cout << "Rat cao, hay thu lai!\n";
        } else if (doan < sobimat) {
            cout << "Rat thap, hay thu lai!\n";
        } else {
            cout << "Chuc mung! Ban da doan dung so.\n";
        }
    } while (doan != sobimat);
    return 0;
}
