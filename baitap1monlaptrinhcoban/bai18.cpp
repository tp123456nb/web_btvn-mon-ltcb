/*
//
//18. Tiêu thụ nước tăng lực
//Một công ty nước ngọt gần đây đã khảo sát 16,500 khách hàng của mình và thấy 
//rằng khoảng 15% trong số những người được khảo sát mua một hoặc nhiều nước 
//tăng lực mỗi tuần. Trong số những khách mua nước tăng lực, có khoảng 58% trong 
//số họ thích nước tăng lực có vị cam. Viết chương trình hiển thị như sau:
//Số lượng khác hàng gần đúng trong cuộc khảo sát mua một hoặc nhiều nước tăng 
//lực trong mỗi tuần.
//Số lượng khách hàng gần đúng trong cuộc khảo sát thích nước tăng lực có vị cam.
*/
//yeu cau Một công ty khảo sát 16,500 khách hàng và thu được kết quả:
//15% số khách hàng mua một hoặc nhiều nước tăng lực mỗi tuần.
//Trong số những khách mua nước tăng lực, 58% thích hương vị cam.
//buoc 1 khai bao bien
//buoc 2 tinh so nguoi mua nuoc tang luc =tong so khach hang *0.15
//huong cam = nguoi mua nuoc tang luc *0.58
//buoc 3 in ra ket qua 

#include <iostream>
using namespace std;
int main (){
	//buoc 1 khai bao
	int tongsokhachhang=16.500;
	int phantrammua=0.15;
	int phamtrammuavicam=0.58;
	//buoc 2 tinh gia tri
	float nguoimuanuoctangluc=tongsokhachhang*0.15;
	float nguoiyeuthichvicam=nguoimuanuoctangluc*0.58;
	//buoc 3 in ra ket qua
	cout <<"so nguoi mua nuoc tang luc la : "<<nguoimuanuoctangluc<<endl;
	cout <<"nguoi yeu thich vi cam la: "<<nguoiyeuthichvicam<<endl;
	return 0;
	
}