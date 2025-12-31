/*
//8. Tổng tiền mua hàng
//Một khách hàng trong một cửa hàng mua 5 món đồ. Giá của các món đồ như sau:
//− Giá của món đồ thứ nhất = 15.59 đô la
//− Giá của món đồ thứ hai = 24.59 đô la
//− Giá của món đồ thứ ba = 6.59 đô la
//− Giá của món đồ thứ tư = 12.59 đô la
//− Giá của món đồ thứ năm = 3.59 đô la
//Viết một chương trình lưu giữ giá của năm món đồ này trong năm biến. Hiển thị giá 
//của mỗi món đồ, tổng tạm tính của giỏ hàng, số tiền thuế, và tổng phải trả. Giả sử
//thuế bán hàng là 7 phần trăm.
*/
//yeu cau viet mot chuong trinh luu giu gia cua nam mon do trong nam bien 
//buoc 1 khai bao gia 
//Khai báo 5 biến để lưu giá của 5 món đồ:
//Món 1: 15.59 đô la
//Món 2: 24.59 đô la
//Món 3: 6.59 đô la
//Món 4: 12.59 đô la
//Món 5: 3.59 đô la
//buoc 2 tinh gia tri
//tong 5 mon =mon1+mon2+mon3+mon4+mon5
//tinh thue = tong *7%
//tinh tong phai tra = thue + tong 5 mon
//buoc 3 in ra ket qua 

#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	// buoc 1 khai bao 
	float mon1 =15.59;
	float mon2=24.59;
	float mon3=6.59;
	float mon4=12.59;
	float mon5=3.59;
	//buoc 2 tinh 
	float tong5mon=mon1+mon2+mon3+mon4+mon5;
	float thue=tong5mon*0.07;
	float tongthuephaitra=thue+tong5mon;
	//buoc 3 in ra ket qua
	cout<<"gia mon 1 la : "<< mon1<<endl;
	cout<<"gia mon 2 la : "<< mon2<<endl;
	cout<<"gia mon 3 la : "<< mon3<<endl;
	cout<<"gia mon 4 la : "<< mon4<<endl;
	cout<<"gia mon 5 la : "<< mon5<<endl;
	cout<<"tong tam tinh "<<tong5mon<<endl;
	cout<<"thue "<<thue<<endl;
	cout<<"tong thue phai tra "<<tongthuephaitra<<endl;
	return 0;
	
	
	
}