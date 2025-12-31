/*

//9. Bao nhiêu Calories?
//Một túi bánh có 30 chiếc bánh. Thông tin về calorie trên túi ghi rằng 10 khẩu phần 
//trong túi và một khẩu phần tương đương với 300 calories. Viết chương trình yêu cầu 
//người dùng nhập số lượng bánh mà họ đã ăn, sau đó in ra thông báo tổng số calories 
//đã tiêu thụ.
*/
//buoc 1 khai bao
//Mỗi khẩu phần: 3 bánh → 300 calories.
//Mỗi bánh = 100 calories.
//Chỉ cần nhân số bánh đã ăn với 100.
//buoc 2 nhap so luong 
//buoc 3 tinh Tong so calories tieu thu
//buoc 4 in ra ket qua 

#include <iostream>
using namespace std;
int main() {
	//buoc 1 khai bao
    double moibanh = 100.0;  // 300 cal / 3 cookies
    int banh;
    //buoc 2 nhap so luong 
    cout << "Nhap so luong banh da an: ";
    cin >> banh;
    //buoc 3 tinh Tong so calories tieu thu
    double tongsocalories = banh * moibanh;
    //buoc 4 in ra ket qua
    cout << "Tong so calories tieu thu: " << tongsocalories << endl;
    return 0;
}
