/*
//12. Tính toán mẫu đất
//Một mẫu đất tương đương với 43.560 feet vuông. Viết chương trình tính toán số mẫu 
//đất trên một khu đất có diện tích 391.876 feet vuông.
*/
//yeu cau tinhs so mau dat tren mot khu dat co dien tich 391.876 feet vuong
//biet 1 mau dau = 43.560 feet vuong
//dian tich khu dat can tinh= 391,876 ft²
//buoc 1 khai bao cac bien 
//buoc 2 mau dat tren mot khu = dien tich/ 43.560
//buoc 3 in ra man hinh ket qua 

#include <iostream>
using namespace std;
int main (){
	// buoc 1 khai bao bien 
	float dientich=391.876;
	float maudat=43.560;
	//buoc 2 tinh so mau dat tren mot khu 
	float maudattrenmotkhu=391.876/43.560;
	//buoc 3 in ra ket qua 
	cout<<"so mau dat tren dien tich 391,876 feet vuong la:"<<maudattrenmotkhu<<endl;
	return 0;
}