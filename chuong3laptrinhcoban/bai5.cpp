/*
//5. Chỉ số BMI
//Chỉ số BMI được tính theo công thức lấy cân nặng (kg) chia cho bình phương của chiều
//cao (tính theo mét). Nếu BMI lớn hơn 25 là thừa cân, nhỏ hơn 18.5 là gầy, trong khoảng
//18.5 đến 25 là bình thường.
//Viết chương trình yêu cầu người dùng nhập chiều cao và cân nặng của họ. sau đó cho
//biết họ đang ở mức cân nặng nào trong 3 loại trên
*/
//yeu cau nguoi dung nhap chieu cao va can nang cua ho 
//buic 1 khai bao bien 
//buoc 2 nhap du lieu 
//buoc 3 Nhập vào hai số.
//Su dung toan tu đieu kien ?: đe:
//In ra số lon hơn
//In ra số nho hơn
//buoc 4 in ra ket qua 
#include <iostream>
using namespace std;
int main() {
	//buoc 1 khai bao bien 
    int a, b;
    // buoc 2 nhap du lieu
    cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap so thu hai: ";
    cin >> b;
    //buoc 3 nhap vao 2 so 
    int max = (a > b) ? a : b;
    int min = (a < b) ? a : b;
    //buoc 4 in ra ket qua 
    cout << "So lon hon: " << max << endl;
    cout << "So nho hon: " << min << endl;
    return 0;
}

