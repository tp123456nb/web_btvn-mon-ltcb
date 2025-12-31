/*

//11. Quãng đường với mỗi bình xăng (Bắt buộc)
//Một chiếc xe với một bình xăng 20 gallon trung bình 23.5 dặm cho mỗi gallon khi 
//lái xe trong thành phố, và 28.9 dặm cho mỗi gallon khi lái xe trên đường cao tốc. 
//Viết chương trình tính toán và hiển thị quãng đường ô tô đi được với một bình xăng 
//khi di chuyển trên thị trấn và khi di chuyển trên đường cao tốc
*/
// yeu cau tinh quang duong oto di duoc trong thanh pho va duong cao toc 
// buoc 1 xac dinh du lieu 
// dung tich binh xang 20 gallon 
//muc tieu hao o duong thanh pho 23.5 dam 
//muc tieu hao o duong cao toc 28.9 dam 
//buoc 2 tinh quang duong oto di duoc 
// buoc 3 in ra ket qua <<cout << endl;


#include <iostream >
using namespace std ;
int main (){
	//buoc 1 
	double gallon = 20;
	double muctieuhaooduongthanhpho = 23.5;
	double muctieuhaooduongcaotoc = 28.9 ;
	// buoc 2 tinh quang duong 
	double duongthanhpho = gallon + muctieuhaooduongthanhpho ;
	double duongcaotoc = gallon + muctieuhaooduongcaotoc ;
	// in ra ket qua 
	cout << "quang duong di duoc o duong thanh pho "<< duongthanhpho <<"miles "<<endl;
	cout << " quang duong di duoc o duong cao toc "<< duongcaotoc <<"miles "<<endl;
	return 0;
	
	
}