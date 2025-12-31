/*

//19. Nhiệt độ cao hàng năm
//Nhiệt độ cao trung bình tháng 7 là 85 độ F ở New York City, 88 độ F ở Denver, và 
//106 độ F ở Phoenix. Viết chương trình tính toán và báo cáo nhiệt độ trung bình mới 
//trong tháng 7 của các thành phố nếu nhiệt độ ở mỗi thành phố tăng lên 2%.
*/
//yeu cau Tính toán nhiệt độ mới của từng thành phố.
//Báo cáo (in ra màn hình) nhiệt độ trung bình mới này.
//buoc 1 khai bao bien 
//New York City: 85°F
//Denver: 88°F
//Phoenix: 106°F
//buoc 2 tinh nhiet do khi tang len 2%
//buoc 3 in ra man hinh ket qua 

#include <iostream>
using namespace std ;
int main (){
	//buoc 1 khai bao bien nhiet do ban dau 
	float neyourkcu=85;
	float denvercu=88;
	float phoenixcu=106;
	//buoc 2 tinh nhiet do sau khi tang 2%
	float neyorkmoi=neyourkcu*0.02;
	float denvermoi=denvercu*0.02;
	float phoenixmoi=phoenixcu*0.02;
	//buoc 3 in ra ket qua 
	cout <<"nhiet do cua newyourk khi tang len 2% la : "<<neyorkmoi<<endl;
	cout<<"nhiet do cua dever khi tang len 2% la : "<<denvermoi<<endl;
	cout<<"nhiet do cua phoenix sau khi tang len 2% la : "<<phoenixmoi<<endl;
	return 0;
	
}
