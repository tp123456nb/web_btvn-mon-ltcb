/*

//21. Bao nhiêu chiếc Pizza?
//Chỉnh sửa chương trình bạn đã viết trong Programming Challenge 20 (Pizza Pi) để
//báo cáo số lượng pizza bạn cần mua cho một bữa tiệc nếu mỗi người tham dự có khả
//năng sẽ ăn khoảng 4 miếng cắt. Chương trình cần yêu cầu người dùng nhập vào số
//lượng người tham dự bữa tiệc, và đường kích loại pizza sẽ được gọi mua. Sau đó 
//tính toán và hiển thị số lượng pizza cần mua lên màn hình.
*/
//yeu cau tinh so luong pizzza caan mua 
//buoc 1 lhai bao bien 
//buoc 2 nhap du lieu 
//buoc 3 tinh 
//dien tich pizza=π×r2
//tinh so mieng tren mot cai pizza=dientich/14.125 
//tinh so pizza can mua =so mieng tren mot cai /dien tich
//buoc 4 in ra ket qua 

#include <iostream>
using namespace std;
int main (){
	//buoc 1 khai bao bien 
	float PI = 3.14159;
	float dientichlat=14.125;
	float nguoi,duongkinh,bankinh,dientichpizza;
	float somiengtrenmotbanh,tongsolatbanh,tongsomieng;
	// buoc 2 khai bao bien 
	cout<<"nhap so nguoi tham gia bua tiec : ";
	cin>>nguoi;
	cout<<"nhap duong kinh cua banh : ";
	cin>>duongkinh;
	//buoc 3 tinh 
	bankinh = duongkinh / 2.0;
    dientichpizza = PI * (bankinh*2);
    somiengtrenmotbanh = dientichpizza / dientichlat;
    tongsolatbanh = nguoi * 4;
    tongsomieng =( tongsolatbanh/somiengtrenmotbanh );
    //buoc 4 in ra ket qua
    cout <<"so pizza can mua la : "<<tongsomieng<<endl;
    return 0;
    

}