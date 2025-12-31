/*

2. Dự đoán sale
Phòng sale The East Coast của một công ty tạo ra 58 phần trăm của tổng doanh thu. 
Dựa trên tỉ lệ phần trăm đó, viết một chương trình đoán xem Phòng sale The East 
Coast này sẽ tạo ra con số là bao nhiêu nếu công ty có doanh thu là 8.6 triệu đô trong 
năm nay.
*/
// yeu cau : tinh so tien cua phong kinh doanh
// voi cong thuc kinh doanh = 58 phan tram loi nhuan toan cong ty 
// loi nhuan cong ty la 8.6 trieu do 8600000
//in ra man hinh 
// giai bai toan
// buoc 1 khai bao bien tien phong kinh doanh tienkd
// voi kieu du leu la so thap phan 
//buoc 2 : tinh toan gia tri bang cong thuc tienkd = (8.6*58)/100
// buoc 3 : in ra man hinh cout << tienkd <<endl;

#include <iostream>
using namespace std ;
int main (){
	// buoc 1;khai bao bien tien phong kinh doanh tienkd
	float tienkd ;
	// buoc 2 ;tinh tienkd 
	tienkd = (8.6*58)/100;
	// in ra man hinh 
	cout << tienkd <<endl;
	return 0 ;
}