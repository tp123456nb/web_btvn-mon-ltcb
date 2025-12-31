/*

//4. Lượng mưa trung bình
//Viết một chương trình tính toán lượng mưa trung bình trong 3 tháng. Chương trình 
//yêu cầu người dùng nhập vào tên của mỗi tháng, như là June, July; và lượng mưa 
//(đơn vị đo là inches) của mỗi tháng. Sau đó chương trình hiển thị ra thông báo tương 
//tự như sau:
//“Lượng mưa trung bình của tháng June, July, và August là 6.72 inches.”.
*/
//yeu cau tinh luong mua trung binh 
// buoc 1 khai bao bien 
// buoc 2 nhap luong nuoc mua trung binh 
// buoc 3 tinh luong mua trung binh
//buoc 4 in ra ket qua

#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	//buoc 1 khai bao bien 
	float thangjune,thangjuly,thangaugust;
	float trungbinh;
	//buoc 2 nhap luong mua trung binh ba thang
	cout<<"luong mua trung binh thang june : ";
	cin>>thangjune;
	cout<<"luong mua trung binh thang july : ";
	cin>>thangjuly;
	cout<<"luong mua trung binh thang auhust : ";
	cin>>thangaugust;
	//buoc 3 tinh luong mua trung binh 
	trungbinh=(float)(thangjune+thangjuly+thangaugust);
	//buoc 4 in ra ket qua
	cout<< "luong mua trung binh trong 3 thang la : "<<trungbinh<<endl;
	return 0;
	
	
	
	
}