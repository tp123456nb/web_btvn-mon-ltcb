//kiem tra sinh vien co phai sinh vien dai nam khong 
//nhap vao y thi in ra thong bao ban la sinh vien dai nam 
//tiep tuc moi nhap khoa 
//neu nhap khoa la so 19 thi in ra ban dang hoc lap tring co ban 
//nguoc lai ban da hoc lap trinh co ban 
//neu khong phai sinh vien dai nam thi in ra ban khong phai sinh vien dai nam va thoat
//dau vao: sv lieu du lieu char
          //k int 
//dau ra :sinh vien dai nam va da hoc lap trinh hay dang hoc lap trinh 

#include <iostream>
using namespace std;
int main(){
	//buoc 1 khai bao bien
	char dnu;
	int k;
	//buoc 2 nhap gia tri cho dnu
	cin>>dnu;
	//buoc 3 kiem tra gia tri dnu 
	if(dnu=='y')
	{
		cout<<"ban la sinh vien dnu \n";
		cout<<"moi nhap khoa ";
		cin>>k;
		if(k==19){
			cout<<"ban dang hoc lap trinh co ban ";
		}else
		{
			cout<<"ban da hoc lap trinh co ban ";
		}
	}
	else
	{
		cout<<"ban khong phai sinh vien dnu ";
	}
	return 0;
	
}