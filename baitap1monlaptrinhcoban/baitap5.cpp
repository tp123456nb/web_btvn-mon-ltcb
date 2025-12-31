// viet chuong trinh tinh 
//a+b,a-b, a*b ,a / b , a%b;
// voi a = 10 , b = 3 , a,b so nguyen
// buoc 1 : khai bao bien a,b 
//        tong , hieu , tich , thuong , phannguyen
// buoc 2 : gan gia tri cho a,b 
// buoc 3 : tinh gia tri cac phep toan cua a va b gom:
// tong = a+b ; tich = a*b ; thuong = a/b; hieu a-b,
//phannguyen = a%b ; 
// buoc 4 : in ra ket qua cuar phep toan 
//<<tong<<endl;
#include <iostream>
using namespace std ;
int main (){
	//buoc 1: khai bao a,b
	int a,b ; // buoc 1 khai bao bien a,b 
	int tong , hieu , tich , phannguyen ; // khai bao 
	float thuong ;
	//buoc 2 : gan gia tri cho a,b 
	a = 10;
	b = 3;
	// buoc 3 : tinh gia tri cua tong
	tong = a+b ; //
	hieu = a-b ; // tinh gia tri phep a-b
	tich = a*b ; // tich a*b
	thuong = (float) a/b ; //thuong (float) a/b ep kieu du lieu
	phannguyen = a % b; // phannguyen a%b
	//buoc 4 : in ra man hinh ket qua
	cout << "tong la : " <<tong <<endl;
	cout << "hieu la : "<< hieu << endl;
	cout << "tich la : " <<tich << endl;
	cout << "thuong la : " << thuong <<endl;
	cout << "phan nguyen la : "<< phannguyen <<endl;
	return 0;
}