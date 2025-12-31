/*

10. Số dặm trên mỗi gallon
Một chiếc xe ô tô có thể chứa được 15 gallon xăng và có thể di chuyển được 375 
dặm trước khi cần nạp lại. Viết chương trình tính toán số dặm trên mỗi gallon mà xe 
có thể đi được. Hiển thị nó ra màn hình.
*/
// yeu cau tinh so dam tren moi gallon ma xe co the di duoc 
// buoc 1 xac dinh du lieu 
//so galoon xe chua 15 gallon 
//so dam xe di duoc  375 dam 
// buoc 2 viet phuong trinh tinh toan so dam 
// so dam tren moi gallon = so dam truoc khi nap / so gallon xang 
// buoc 3 in ra ket qua cout<< endl;

#include <iostream>
using namespace std;
int main (){
	// buoc 1 xac dinh du lieu
	double sogallonchuaduoc = 15;
	double sodamxediduoc = 375;
	double sodamtrenmoigallon ;
	// buioc 2 viet phuong trinh 
	sodamtrenmoigallon = sodamxediduoc / sogallonchuaduoc ;
	//buoc 3 in ra ket qua 
	cout << "so dam tren moi gallon ma xe co the di duoc  "<< sodamtrenmoigallon<<" (sodamxediduoc/sogallonchuaduoc)"<<endl;
	return 0;
	
}