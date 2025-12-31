//nhap vao ten sinh vien 
//dia chi ,tuoi
//in ra man hinh cac thong tin cua sinh vien 

#include <iostream>
#include <string>
using namespace std;
int main (){
	// buoc 1 khai bao bien 
	string ten ,diachi;
	int tuoi;
	
	//buoc 2 nhap gia tri cho bien 
	cout<<"nhap ten sinh vien : ";
	getline(cin,ten);
	cout<<"nhap tuoi : ";
	cin>>tuoi;
	cin.ignore();
	cout<<"nhap dia chi sinh vien : ";
	getline(cin,diachi);

	//buoc 3 in ra man hinh cac gia tri 
	cout <<"ten la "<<ten<<" dia chi "<<diachi<<"tuoi "<<tuoi;
	return 0;
	
}