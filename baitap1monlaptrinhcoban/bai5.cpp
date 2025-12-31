/*
//5. Giá trị trung bình
//Để có được giá trị trung bình của một loạt các giá trị, bạn cộng các giá trị lại sau đó 
//chia cho tổng số các giá trị đếm được. Viết một chương trình để lưu trữ các giá trị
//sau trong năm biến khác nhau: 28, 32, 37, 24, và 33. Chương trình trước hết phải 
//tính được tổng của năm biến và lưu kết quả vào trong một biệt sum riêng biệt. Sau 
//đó, chương trình lấy biến sum chia cho 5 để lấy được giá trị trung bình. Hiển thị nó 
//giá trị trung bình ra màn hình.
*/
//yeu cau tinh gia tri trung binh
//voi 5 bien khac nhau 28.32.37.24 va 33
//buoc 1 khai bao cac bien 
//buoc 2 tinh trung binh = tong/5
//buoc 3 in ra ket qua 

#include <iostream>
using namespace std;
int main (){
	//buoc 1 khai bao bien 
	int a =28;
	int b =32;
	int c =37;
	int d =24;
	int e =33;
	//buoc 2 tinh trung binh 
	int tong=a+b+c+d+e;
	float trungbinh=(float)tong/5;
	//buoc 3 in ra ket qua
	cout<<"diem trung binh la : "<<trungbinh<<endl;
	return 0;
	
}