/*
//3
//Viết chương trình yêu cầu nhập điểm của 5 bài kiểm tra. Chương trình thực hiện tính toán giá trị trung 
//bình của 5 bài kiểm tra này sau đó hiển thị lên màn hình. Số được hiển thị phải được định dạng theo kí hiệu fixed-point
//, xới độ chính xác là 1 đằng sau dấu phẩy.
//Bước 1: Khai báo 5 biến Diem, biến TrungBinh.
//Bước 2: Nhập vào 5 đầu điểm của 5 năm biến Diem.
//Bước 3: Tính điểm trung bình 
//TrungBinh = (Diem1 + Diem2 + Diem3 + Diem4 + Diem 5)/5;
//Bước 4: In kết quả TrungBinh ra màn hình.
*/

#include <iostream>
using namespace std;
int main (){
	//buoc 1 khai bao 5 bien diem 
	float diem1,diem2,diem3,diem4,diem5;
	float trungbinh;
	// buoc 2 nhap 5 diem cua nam bien diem 
	cout<<"nhap diem 1: ";
	cin>>diem1;
	cout <<"nhap diem 2: ";
	cin>>diem2;
	cout<<"nhap diem 3: ";
	cin>>diem3;
	cout <<"nhap diem 4: ";
	cin>>diem4 ;
	cout <<"nhap diem 5: ";
	cin >>diem5;
	//buoc 3 tinh diem trung binh 
	trungbinh = (float)(diem1+diem2+diem3+diem4+diem5)/5;
	//in ra man hinh 
	cout <<"diem trung binh la "<<trungbinh<<endl;
	return 0;
	
}
