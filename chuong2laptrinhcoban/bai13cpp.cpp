/*
//13. Currency
//Viết chương trình chuyển đổi giá trị của U.S. dollar sang Japanese yen và euros, lưu 
//trữ hệ số chuyển đổi trong các hằng số YEN_PER_DOLLAR và 
//EUROS_PER_DOLLAR. Để có được tỉ lệ chuyển đổi được cập nhật, hãy tìm trên 
//Internet với từ khóa “currency exchange rate”. Nếu bạn không thể tìm được tỉ lệ
//chuyển đổi trong thời gian gần đây nhất thì có thể sử dụng tỉ lệ sau:
//− 1 Dollar = 98.93 Yen
//− 1 Dollar = 0.74 Euros
//Hãy định dạng kết quả ở dạng kí hiệu fixed-point, với độ chính xác 2 số đằng sau 
//dấu phẩy, và luôn để dấu phẩy thập phân được hiển thị.
*/
//buoc 1 khai bao bien , nhap so tien usd tu nguoi dung.
//buoc 2 nhap du lieu 
//buoc 3 Tính:
//yen = usd * YEN_PER_DOLLAR
//euro = usd * EUROS_PER_DOLLAR
//buoc 4 in ra ket qua 

#include <iostream>
using namespace std;
int main (){
	//buoc 1 khai bao bien , nhap so tien usd tu nguoi dung.
	double YEN_PER_DOLLAR = 98.93;
    double EUROS_PER_DOLLAR = 0.74;
    double usd, yen, euro;
    //buoc 2 nhap du lieu 
    cout<<"nhap so tien su dung : ";
    cin>>usd;
    //buoc 3 
    yen = usd * YEN_PER_DOLLAR;
    euro = usd * EUROS_PER_DOLLAR;
    //buoc 4 in ra ket qua 
    cout <<"so tien tuong ung"<<endl;
    cout << "Japanese Yen: " << yen << endl;
    cout << "Euros: " << euro << endl;
    return 0;

    
}