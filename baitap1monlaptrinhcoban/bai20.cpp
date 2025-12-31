/*

//20. Bao nhiêu sơn
//Một nhãn hiệu sơn quảng cáo rằng sơn của họ có thể phủ được 340 feet vuông trên 
//mỗi gallon. Viết chương trình xác định và báo cáo xấp xỉ số lượng gallon sơn cần 
//thiết để sơn cho hai lớp áo trên hàng rào bằng gỗ cao 6 feet và dài 100 feet.
*/
//yeu cau xác định và báo cáo xấp xỉ số lượng gallon sơn cần 
//thiết để sơn cho hai lớp áo trên hàng rào bằng gỗ cao 6 feet và dài 100 feet.
//buoc 1 khai bao bien 
//buoc 2 tinh dien tich can son = chieu cao*chieu dai *2
//tinh so gallon can thiet = dien tich/340
//buoc 3 in ra ket qua 

#include <iostream>
using namespace std;
int main (){
	//buoc 1 khai bao bien 
	float dientichphu=340.0;
	float chieucao=6;
	float chieudai=100;
	//buoc 2 tinh 
	float dientichcanson=chieucao*chieudai*2;
	float sogalloncanthiet=dientichcanson/dientichphu;
	//buoc 3 in ra ket qua
	cout<<"dien tich can son la : "<<dientichcanson<<endl;
	cout<<"so gallon can thiet la : "<<sogalloncanthiet<<endl;
	return 0;
}