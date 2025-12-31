/*
//15. Thuế bất động sản
//Một quận thu thuế bất động sản trên giá trị đánh giá của tài sản, bằng 60 phần trăm 
//giá trị thực của tài sản. Nếu một mẫu đất được định giá là 10.000 đô la, thì giá trị
//đánh giá của nó là 6.000 đô la. Thuế tài sản sau đó là 75 ¢ cho mỗi $ 100 của giá trị
//đánh giá. Thuế cho diện tích được đánh giá là $ 6.000 sẽ là $ 45. Viết chương trình 
//yêu cầu nhập giá trị thực của một phần tài sản, sau đó hiển thị giá trị đánh giá và 
//thuế tài sản.
//(1 đô la = 100 cent)
*/
//yeu cau giá trị đánh giá và thuế tài sản.
//buoc 1 khai bao bien
//buoc 2 nhap du lieu
//buoc 3 tinh gia tri 
//buoc 4 in ra ket qua 

#include <iostream>
using namespace std;
int main() {
    double giatrithuc;      // Giá trị thực
    double giatridanhgia;  // Giá trị đánh giá
    double thuebatdongsan;             // Thuế bất động sản
    // Nhập giá trị thực của tài sản
    cout << "Nhap gia tri thuc cua bat dong san ($): ";
    cin >>giatrithuc;
    // Tính giá trị đánh giá (60% giá trị thực)
    giatridanhgia = giatrithuc * 0.6;
    // Tính thuế (0.75$ cho mỗi 100$ giá trị đánh giá)
    thuebatdongsan = (giatridanhgia / 100) * 0.75;
    // Xuất kết quả
    cout << "Gia tri danh gia: $" << giatridanhgia << endl;
    cout << "Thue bat dong san: $" << thuebatdongsan << endl;
    return 0;
}
