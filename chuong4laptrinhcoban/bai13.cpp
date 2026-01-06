/*
13. Lớn nhất và nhỏ nhất trong các số
Viết một chương trình với một vòng lặp cho phép người dùng nhập một dãy các số
nguyên cho đến khi người dùng nhập vào số -99. Sau khi tất cả các số đã được nhập,
chương trình sẽ hiển thị các số lớn nhất và nhỏ nhất đã nhập.
*/
#include <iostream>
using namespace std;
int main() {
    int so;
    int lonnhat, nhonhat;
    bool sodautien = true;  // Kiểm tra số đầu tiên
    cout << "Nhap cac so nguyen (-99 de ket thuc): \n";
    while (true) {
        cin >> so;
        if (so == -99) {
            break;  // Dừng vòng lặp khi nhập -99
        }
        if (sodautien) {
            lonnhat = nhonhat = so;  // Số đầu tiên
            sodautien = false;
        } else {
            if (so > lonnhat) lonnhat = so;
            if (so < nhonhat) nhonhat = so;
        }
    }
    if (sodautien) {
        cout << "Ban khong nhap so nao ca.\n";
    } else {
        cout << "So lon nhat: " << lonnhat << endl;
        cout << "So nho nhat: " << nhonhat << endl;
    }
    return 0;
}

