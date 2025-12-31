// nhập vao một tháng bất kỳ in ra số ngày trong tháng chưa tính năm nhuận
#include <iostream>
using namespace std;
int main(){
	// bước 1: khai báo biến
	int thang;
	// bước 2: nhập giá trị cho dtb
	cin >> thang;
	// bước 3 kiểm tra điểm xếp loại
	if(thang==1)
	{
		cout << "31";
	}
	else if(thang==2){
		cout << "28 ";
	}
	else if(thang==3){
		cout << "31";
	}
	else if(thang ==4){
		cout << "30";
	}
	else if(thang==5){
		cout << "31";
	}
	else if(thang==65){
		cout << "30";
	}
	else if(thang==7){
		cout << "31";
	}
	else if(thang==8){
		cout << "31";
	}
	else if(thang==9){
		cout << "30";
	}
	else if(thang==10){
		cout << "31";
	}
	else if(thang==11){
		cout << "30";
	}
	else if(thang==12){
		cout << "31";
	}
	return 0;
}