/*
//22. Tính góc
//Viết một chương trình yêu cầu người dùng nhập vào một góc, đơn vị đo radians. 
//Chương trình sẽ hiển thị các giá trị sine, cosine, và tangent của góc đó. (Sử dụng 
//hàm sin, cos, và tan trong thư viện có sẵn để xác định các giá trị này.) Output sẽ hiện 
//thị các số dạng kí hiệu fixed-point, làm tròn đến 4 chữ số đằng sau dấu phẩy
*/
//buoc 1 khai bao bien 
//buoc 2 nhap du lieu 
//buoc 3 tinh sin cos tan 
// buoc 4 in ra ket qua 

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
	//buoc 1 khai bao bien
	float goc,cos,sin,tan;
    float s, c, t;
    // buoc 2 Nhập góc 
    cout << "Nhap goc: ";
    cin >> goc;
    // buoc 3 Tính sin, cos, tan
    s=sin;
    c=cos;
    t=tan;
    // Định dạng fixed-point, 4 chữ số thập phân
    cout<<fixed<<setprecision(4);
    //buoc 4  Xuất kết quả
    cout << "Sin(" << goc << ") = " << s << endl;
    cout << "Cos(" << goc << ") = " << c << endl;
    cout << "Tan(" << goc << ") = " << t << endl;
    return 0;
}