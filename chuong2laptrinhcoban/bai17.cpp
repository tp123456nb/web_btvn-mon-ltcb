/*
//17. Gia sư toán
//Viết một chương trình có thể sử dụng như một gia sư về toán cho các bạn nhỏ. 
//Chương trình sẽ hiển thị hai số ngẫu nhiên để thực hiện phép cộng, ví dụ:247+129=
//Sau đó chương trình sẽ dừng lại trong khi học sinh thực hiện việc tính toán. Khi học 
//sinh đã sẵn sàng để kiểm tra đáp án, họ có thể nhấn một phím bất kỳ để chương trình 
//hiển thị kết quả chính xác:247+129=376
*/
//buoc 1 khai bao bien 
//buic 2 nhap du lieu 
//buoc 3 tinh 247+129
//buoc 4 in ra ket qua 

#include <iostream>
using namespace std;
int main (){
	//buoc 1 khai bao bien 
	int a=247;
	int b=129;
	int tong;
	//buic 2 nhap du lieu 
	cout<<"nhap gia tri a : ";
	cin>>a;
	cout<<"nhap gia tri b : ";
	cin>>b;
    //buoc 3 tinh 247+129
    tong=a+b;
    //buoc 4 in ra ket qua 
    cout <<"tong cua a+b bang la : "<<tong <<endl;
    return 0;
	
}