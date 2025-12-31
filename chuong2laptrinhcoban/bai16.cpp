/*
//16. Thuế tài sản công dân cao tuổi
//Quận Madison cung cấp một khoản miễn thuế chủ nhà $ 5,000 cho những người cao 
//tuổi của nó. Ví dụ: nếu ngôi nhà của một người cao tuổi được định giá là 158.000
//đô la, giá trị được đánh giá của nó sẽ là 94.800 đô la, như đã giải thích ở trên. Tuy 
//nhiên, anh ta sẽ chỉ trả thuế trên 89.800 đô la. Với mức thuế năm ngoái là 2,64 đô la 
//cho mỗi 100 đô la giá trị được đánh giá, thuế tài sản sẽ là 2.370,72 đô la. Ngoài việc 
//giảm thuế, công dân cao tuổi được phép trả thuế tài sản của họ thành bốn lần như 
//nhau. Khoản thanh toán hàng quý đến hạn cho tài sản này sẽ là $ 592,68. Viết một 
//chương trình yêu cầu người dùng nhập giá trị thực của một phần tài sản và thuế suất 
//hiện hành cho mỗi $ 100 giá trị được đánh giá. Sau đó, chương trình sẽ tính toán và 
//báo cáo mức thuế bất động sản hàng năm mà một chủ nhà cao cấp sẽ phải trả cho 
//bất động sản này và hóa đơn thuế hàng quý sẽ là bao nhiêu.
*/
//yeu cau bai toan Giá trị được đánh giá của tài sản = 60% giá trị thực
//Công dân cao tuổi được:
//Trừ thêm 5.000 USD khỏi giá trị được đánh giá
//Được trả thuế làm 4 kỳ bằng nhau
//buoc 1 khai bao bien
//buoc 2 nhap du lieu
//buoc 3 tinh 
//Giá trị được đánh giá=gia tri thuc te *0.6
//Giá trị chịu thuế (sau khi trừ miễn thuế 5.000 USD)=gia tri danh gia -5000
//Thuế bất động sản hàng năm=gia tri chiu thue/100*thue suat
//Số tiền mỗi quý phải trả =thue bat dong san hang nam/4
//buoc 4 in ra ket qua 

#include <iostream>
using namespace std ;
int main (){
	//buoc 1 khai bao bien 
	float giatrithucte,giatridanhgia,giatrichiuthue,thuebatdongsanhangnam,thuesuat;
	float giatriduocdanhgia,sotienmoiquyphaitra;
	//buoc 2 khai bao bien
	cout<<"nhap gioa tri thuc cua tai san : ";
	cin>>giatrithucte;
	cout<<"Nhap thue suat tren moi $100 gia tri duoc danh gia: ";
	cin>>thuesuat;
	//buoc 3 tinh 
	giatriduocdanhgia=giatrithucte*0.6;
	giatrichiuthue=giatridanhgia-5000;
	thuebatdongsanhangnam=giatrichiuthue/100*thuesuat;
	sotienmoiquyphaitra=thuebatdongsanhangnam/4;
	//buocc 4 in ra ket qua 
	cout<<"thue bat dong san hang nam la : "<<	thuebatdongsanhangnam<<endl;
	cout<<"so tien moi quy phai tra la : "<<sotienmoiquyphaitra<<endl;
	return 0;
	
	
	
	
	
	
	
	
}
 






