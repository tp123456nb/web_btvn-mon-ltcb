// vidu 5 xep loai sinh vien theo diem
// yeu cau nhap vao diem trung binh kieu so thuc float
// in ra va xep loai sinh vien theo xuat sac, gioi, kha, trung binh
// dau vao diem trung binh
// diem ra la xep loai
#include <iostream>
using namespace std;
int main (){
	// buoc 1: khai bao bien
	float dtb;
	// buoc 2: nhap gia tri
	cin>> dtb;
	// buoc 3: kiem tra xep loai diem
	if(dtb >=9 && dtb <=10)
	{
		cout <<" ban xep loai xuat sac ";
	}
	else if(dtb >=8 && dtb <9){
		cout <<" ban xep loai gioi ";
	}
	else if (dtb >=7 && dtb <8){
		cout <<" ban xep loai kha ";
	}
	else if (dtb >=5 && dtb <7){
		cout <<" ban xep loai trung binh ";
	}
	else if (dtb >=0 && dtb <5){
		cout <<" ban xep loai yeu ";
	}
	return 0;
}