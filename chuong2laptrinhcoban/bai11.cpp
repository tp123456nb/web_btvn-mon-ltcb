/*
//11. Chi phí ô tô (Bắt buộc)
//Viết một chương trình yêu cầu người dùng nhập chi phí hàng tháng cho các chi phí 
//sau đây phát sinh từ việc vận hành ô tô của họ: thanh toán khoản vay, bảo hiểm, 
//xăng, dầu, lốp và bảo dưỡng. Sau đó, chương trình sẽ hiển thị tổng chi phí hàng 
//tháng của các chi phí này và tổng chi phí hàng năm của các chi phí này.
*/
//yeu cau tổng chi phí hàng 
//tháng của các chi phí này và tổng chi phí hàng năm của các chi phí này
//buoc 1 khai bao bien 
//buoc 2 nhap du lieu 
//buoc 3 tinh chi phi thang ,nam
//buoc 4 in ra ket qua 

#include <iostream>
using namespace std;
int main (){
	//buoc 1 khai bao bien 
	float thanhtoankhoanvay,baohiem,xang,dau,lop,baoduong;
	//buoc 2 nhap du lieu
	cout<<"nhap chi phi hang thangcho khoan vay :";
	cin>>thanhtoankhoanvay;
	cout<<"nhap chi phi bao hiem :";
	cin>>baohiem;
	cout<<"nhap chi phi xang :";
	cin>>xang;
	cout<<"nhap chi phi dau : ";
	cin>>dau;
	cout<<"nhap chi phi lop : ";
	cin>>lop;
	cout<<"nhap chi phi bao duong ; ";
	cin>>baoduong;
	//buoc 3 
	float tongchiphihangthang=thanhtoankhoanvay+baohiem+xang+dau+lop+baoduong;
	float tongchiphihangnam=tongchiphihangthang*12;
	//buoc 4 in ra ket qua 
	cout<<"tong chi phi hang thang la : "<< tongchiphihangthang<<endl;
	cout<<"tong chi phi hang nam la : "<<tongchiphihangnam<<endl;
	return 0;
	
}