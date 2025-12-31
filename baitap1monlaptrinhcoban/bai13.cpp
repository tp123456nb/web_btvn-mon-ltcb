/*
//13. Giá một bo mạch
//Một công ty điện tử bán một bo mạch với lợi nhuận là 35 phần trăm. Viết chương 
//trình tính toán giá bán của một bo mạch có chi phí là 14.95 đô la. Hiện kết quả lên 
//màn hình.
*/
// buoc 1 Khai báo một biến lưu chi phí sản xuất của bo mạch:
//Chi phí: 14.95 đô la Tính giá bán với lợi nhuận 35%
//Lợi nhuận = 35% = 0.35
//buoc 2 tinh gia ban
//Giá bán = chi phí + (chi phí × 35%)
//buoc 3 in ra ket qua 

#include <iostream>
using namespace std;
int main (){
	//buoc 1 khai bao 
	float chiphibomach=14.95;
	//buoc 2 tinh gia tri
	float loinhuan=chiphibomach*0.35;
	float giaban=chiphibomach+loinhuan;
	//buoc 3 in ra ket qua
	cout <<"gia ban cua mot bo mach la : "<<giaban<<endl;
	return 0;
	
	
}