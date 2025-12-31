/*

7. Mức nước biển (Bắt buộc)
Giả sử mức nước biển hiện tại dâng lên khoảng 1.5 mm mỗi năm, viết một chương 
trình hiển thị:
− Số mm sẽ tăng lên so với mức nước biển hiện tại sau 5 năm.
− Số mm sẽ tăng lên so với mức nước biển hiện tại sau 7 năm.
− Số mm sẽ tăng lên so với mức nước biển hiện tại sau 10 năm.
*/
//yeu cau muc nuoc bien tang trung binh 1.5 mm moi nam . 
//viet chuong trinh :
// muc nuoc bien se tang bao nhieu mm sau 5 nam .
//muc nuoc bien se tang bao nhieu mm sau 7 nam .
// muc nuoc bien se tang bao nhieu mm sau 10 nam .
//in ra man hinh 
// buoc 1 : xac dinh du lieu ban dau 
// moi nam bien dang : ty le = 1.5mm/nam 
// buoc 2 : sau n nam : tang = ty le * n 
//sau 5 nam : 1.5mm * 5
//sau 7 nam : 1.5mm *7
//sau 10 nam : 1.5mm * 10
// buoc 3 : in ra man hinh << cout << endl;

#include <iostream>
using namespace std;
int main (){
	// buoc 1 toc do dang nuoc bien moi nam 
	double danglen5 = 1.5;
	//buoc 2 :sau 5,7 va 10 nam
	double tanglen5 = 1.5 * 5;
	double tanglen7 = 1.5 * 7;
	double tanglen10 =1.5 * 10;
	//buoc 3 :in ket qua 
	cout<< "muc nuoc bien se tang sau 5 nam :" << tanglen5 <<"mm"<<endl;
	cout<< "muc nuoc bien se tang sau 7 nam :"  << tanglen7 <<"mm"<<endl;
	cout << "muc nuoc bien se tang sau 10 nam :" << tanglen10 << "mm"<<endl;
	return 0;
	
}
