/*
8. Trộn màu
Ba màu cơ bản trong một chế độ màu nào đó là red, blue, và yellow. Khi trộn từng cặp
2 màu ta sẽ có:
− red + blue → purple (màu tím)
− red + yellow → orange (màu cam)
− blue + yellow → green (màu xanh lá cây)
Viết chương trình yêu cầu nhập tên 2 màu cơ bản, in ra màu kết quả khi pha trộn chúng.
Nếu người dùng nhập không đúng màu cơ bản thì thông báo lỗi
*/
//buoc 1 khai bao bien 
//buoc 2 nhap du lieu 
//buoc 3 in ra ket qua 

#include <iostream>
#include <string>
using namespace std;
int main() {
	//1 khai bao bien 
    string mau1, mau2;
    //buoc 2 nhap du lieu 
    cout << "Nhap mau thu nhat (red, blue, yellow): ";
    cin >> mau1;
    cout << "Nhap mau thu hai (red, blue, yellow): ";
    cin >> mau2;
    //buoc 3 in ra ket qua 
    if ((mau1 == "red" && mau2 == "blue") || (mau1 == "blue" && mau2 == "red")) {
        cout << "Mau tao thanh: purple (mau tim)";
    }
    else if ((mau1 == "red" && mau2 == "yellow") || (mau1 == "yellow" && mau2 == "red")) {
        cout << "Mau tao thanh: orange (mau cam)";
    }
    else if ((mau1 == "blue" && mau2 == "yellow") || (mau1 == "yellow" && mau2 == "blue")) {
        cout << "Mau tao thanh: green (mau xanh la cay)";
    }
    else {
        cout << "Loi! Mau nhap vao khong hop le.";
    }
    return 0;
}

