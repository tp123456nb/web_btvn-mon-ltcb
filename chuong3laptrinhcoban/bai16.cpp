/*
16. Chạy đua
Viết chương trình nhập vào tên và thời gian hoàn thành cuộc đua của 3 vận động viên.
Sau đó in ra xếp hạng của 3 người theo thứ tự nhất nhì ba.
Chú ý: báo lỗi nếu nhập thời gian đua là số âm.
*/
//yeu cau nhap vao ten va thoi gian hoan thanh cuoc dua cua 3 van dong vien 
//buoc 1 khai bao bien 
//buoc 2 nhap du lieu 
//buoc 3 so sanh kiem tra 

#include <iostream>
#include <string>
using namespace std;
int main() {
	//buoc 1 khai bao bien 
    string ten1, ten2, ten3;
    double tg1, tg2, tg3;
    //buoc 2 nhap du lieu 
    cout << "Nhap ten van dong vien thu nhat: ";
    cin >> ten1;
    cout << "Nhap thoi gian hoan thanh: ";
    cin >> tg1;
    cout << "Nhap ten van dong vien thu hai: ";
    cin >> ten2;
    cout << "Nhap thoi gian hoan thanh: ";
    cin >> tg2;
    cout << "Nhap ten van dong vien thu ba: ";
    cin >> ten3;
    cout << "Nhap thoi gian hoan thanh: ";
    cin >> tg3;
    // buoc 3 Kiem tra thoi gian hop le
    if (tg1 < 0 || tg2 < 0 || tg3 < 0) {
        cout << "Loi! Thoi gian dua khong duoc la so am.";
        return 0;
    }
    cout << "\nKet qua xep hang:\n";
    if (tg1 <= tg2 && tg1 <= tg3) {
        cout << "Hang Nhat: " << ten1 << endl;
        if (tg2 <= tg3) {
            cout << "Hang Nhi: " << ten2 << endl;
            cout << "Hang Ba: " << ten3 << endl;
        } else {
            cout << "Hang Nhi: " << ten3 << endl;
            cout << "Hang Ba: " << ten2 << endl;
        }
    }
    else if (tg2 <= tg1 && tg2 <= tg3) {
        cout << "Hang Nhat: " << ten2 << endl;
        if (tg1 <= tg3) {
            cout << "Hang Nhi: " << ten1 << endl;
            cout << "Hang Ba: " << ten3 << endl;
        } else {
            cout << "Hang Nhi: " << ten3 << endl;
            cout << "Hang Ba: " << ten1 << endl;
        }
    }
    else {
        cout << "Hang Nhat: " << ten3 << endl;
        if (tg1 <= tg2) {
            cout << "Hang Nhi: " << ten1 << endl;
            cout << "Hang Ba: " << ten2 << endl;
        } else {
            cout << "Hang Nhi: " << ten2 << endl;
            cout << "Hang Ba: " << ten1 << endl;
        }
    }
    return 0;
}
