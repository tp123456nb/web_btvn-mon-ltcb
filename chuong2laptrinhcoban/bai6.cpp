/*

6. Điều chỉnh các thành phần (Bắt buộc)
Công thức làm bánh với các thành phần như sau:
− 1.5 cốc đường
− 1 cốc bơ
− 2.75 cốc bột
Với các phần như trên cho ra 48 chiếc bánh. Bạn hãy viết một chương trình yêu cầu 
người dùng nhập số lượng chiếc bánh mà họ muốn làm, sau đó hiển thị ra tỉ lệ của 
các thành phần theo công thức trên để đủ làm được số chiếc bánh mà họ muốn.
*/
//yeu cau tinh luong nguyen lieu can thiet de lam banh 
//buoc 1 khai bao luong thanh phan 
//buoc 2 nhap so luong nguyen lieu lam banh 
//buoc 3 tinh gia tri 
//buoc 4 in ra ket qua 

#include <iostream>
using namespace std;
int main (){
	//buoc 1 khai bao luong thanh phan 
	float duong=1.5;
	float bo=1;
	float cocbot=2.75;
	float tongbanh=48;
	//buoc 2 nhap so luong nguyen lieu lam banh 
	int sobanh;
	cout << "Nhap so luong banh muon lam: ";
    cin >>sobanh;
    //buoc 3 tinh gia tri 
    float tyle=sobanh/48;
    //buoc4 in ra ket qua
    cout << "Luong duong can: " << duong*tyle <<endl;
    cout << "Luong bo can   : " << bo*tyle <<endl ;
    cout << "Luong bot can  : " << cocbot*tyle <<endl;
    return 0;
	
	
	
	
}