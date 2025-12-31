/*
9. Trò chơi đổi 1 Đô la
Viết chương trình yêu cầu người người dùng nhập 4 số tương ứng số cent (1 đô la bằng
100 cent), nickel (bằng 5 cent), dime (bằng 10 cent), quarter (bằng 35 cent) để khi cộng
lại thì được 1 đô la. Nếu cộng lại vừa đúng 1 đô la thì thông báo người chơi thắng, nếu
không phải thì thông báo kết quả lớn hơn hay nhỏ hơn 1 đô la.
*/
//buoc 1 khai bao bien 
//buoc 2 nhap du lieu 
//buoc 3 ting tong số cent tu cac đong tien tren
//buoc 4 so sanh tong so tien voi 1 dola

#include <iostream>
using namespace std;
int main() {
	//buoc 1 khai bao bien 
    int cent, nickel, dime, quarter;
    int tongTien;
    //buoc 2 nhap du lieu 
    cout << "Nhap so dong cent (1 cent): ";
    cin >> cent;
    cout << "Nhap so dong nickel (5 cent): ";
    cin >> nickel;
    cout << "Nhap so dong dime (10 cent): ";
    cin >> dime;
    cout << "Nhap so dong quarter (25 cent): ";
    cin >> quarter;
    //buoc 3 ting tong số cent tu cac đong tien tren
    tongTien = cent * 1 + nickel * 5 + dime * 10 + quarter * 25;
    cout << "Tong so tien: " << tongTien << " cent" << endl;
    //buoc 4 so sanh tong so tien voi 1 dola
    if (tongTien == 100) {
        cout << "Chuc mung! Ban da thang tro choi.";
    }
    else if (tongTien > 100) {
        cout << "Tong tien lon hon 1 do la.";
    }
    else {
        cout << "Tong tien nho hon 1 do la.";
    }
    return 0;
}
