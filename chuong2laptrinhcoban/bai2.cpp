/*

//2. Vị trí ngồi trên sân vận động
//Có 3 loại ghế ngồi trên một sân vận động. Với một môn bóng, các ghế hạng A với
//giá 15 đô la, các ghế hạng B có giá 12 đô la, và các ghế hạng C có giá là 9 đô la. 
//Viết chương trình yêu cầu người dùng nhập số lượng vé cho mỗi hạng ghế và hiển 
//thị tổng số tiền thu được từ các vé được bán ra. Hãy định dạng số tiền ở dạng kí hiệu 
//fixed-point, với độ chính xác 2 số thập phân đằng sau dấu phẩy, và luôn hiển thị dấu 
//phẩy thập phân trong mọi trường hợp.
*/
//yeu cau tinh tong so tien thu duoc tu viec ban ve 
//buoc 1 khai bao bien 
//Ghế hạng A: 15 đô
//Ghế hạng B: 12 đô
//Ghế hạng C: 9 đô
//buoc 2 nhap du lieu tinh tong tien =(a*15)+(b*12)+(c*9)
//buoc 3 in ket qua 

#include <iostream>
using namespace std;
int main (){
	//buoc 1 khai bao bien 
	int ve1,ve2,ve3;
	//buoc 2 nhap du lieu
	cout<<"nhap so ve hang A : ";
	cin>>ve1;
	cout<<"nhap so ve hang B : ";
	cin>>ve2;
	cout<<"nhap so ve hang C : ";
	cin>>ve3;
	float giaA=15;
	float giaB=12;
	float giaC=9;
	float tong =giaA *ve1+giaB*ve2+giaC*ve3;
	//buoc 3 ket qua 
	cout <<"tong tien thu duoc la : "<<tong<<endl;
	return 0;
	
}