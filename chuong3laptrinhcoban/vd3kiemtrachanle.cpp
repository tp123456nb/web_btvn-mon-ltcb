//nang cap kiem tra tinh chan le cua mot so 
//su dung cau lenhj re nhanh if <bieu thuc kiem tra phan du khi chia cho 2 ==0>else
//dau vao : la so nguyen 
//dau ra : la tinh chan le
//cac buoc thuc hien 
//buoc 1 : khai bao bien 
//buoc 2 : nhap gia tri bien 
//buoc 3 kiem tra tinh chan le 
//bang lenh if else
#include <iostream>
using namespace std;
int main(){
	//buoc 1 khai bao bien
	int so;
	//buoc 2 nhap gia tri so 
	cin>>so;
	//buoc 3 kiem tra 
	if(so%2==0){
		cout<<"la so chan ";
	}
	else{
		cout<<"la so le ";
	}
	return 0;
}

