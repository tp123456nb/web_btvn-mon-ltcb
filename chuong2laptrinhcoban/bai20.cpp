/*
//20. Pizza Pi
//Tiệm Pizza của Joe đang cần một chương trình tính toán số lượng miếng cắt của một 
//chiếc pizza có kích cỡ bất kỳ. Chương trình thực hiện các bước như sau:
//A. Yêu cầu người dùng nhập vào đường kính của chiếc pizza (đơn vị là inches).
//B. Tính toán số lượng miếng cắt có thể chia ra từ chiếc pizza với kích cỡ đó.
//C. Hiển thị một thông báo rằng số lượng miếng cắt nên được thực hiện.
//Để tính toán được số lượng miếng cắt hợp lý, bạn cần biết một số thông tin sau:
//− Mỗi miếng cắt cần phải có diện tích 14.125 inches.
//− Để tính toán số lượng miếng cắt, đơn giản ta chia diện tích của chiếc pizza 
//cho 14.125.
//− Diện tích của chiếc pizza được tính theo công thức area=pi*rbinh
//Hãy đảm bảo rằng output của chương trình hiển thị chính xác số lượng các miếng 
//cắt, và nó ở định dạng kí hiệu fixed-point, làm tròn đến số đầu tiên đằng sau dấu 
//phẩy. Nên sử dụng pi như một hằng số
*/

//buoc 1 khai bao bien 
//Khai bao hang so PI.
//Nhap đuong kinh pizza.
//buoc 2 nhap du lieu 
//buoc 3 Tinh ban kinh.
//Tinh dien tich pizza.
//buoc 4 in ra ket qua 

#include <iostream>
using namespace std;
int main (){
	//buoc 1 khai bao bien 
	float PI = 3.14159;
	float dientichmoimieng=14.125;
	float duongkinh,bankinh,dientichpizza,soluongmiengcat;
	//buoc 2 nhap du lieu 
	cout << "Nhap duong kinh cua pizza (inches): ";
    cin >> duongkinh;
    //buoc 3 tinh 
    bankinh = duongkinh / 2.0;
    dientichpizza = PI * (bankinh*2);
    soluongmiengcat = dientichpizza/dientichmoimieng;
    //buoc 4 in ra ket qua 
    cout <<"so luong mieng cat co the chia ra tu chiec pizza la : "<<soluongmiengcat<<endl;
    return 0;
}
	
	
	
	
	
	
	
	