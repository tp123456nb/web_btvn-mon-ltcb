/*

4. Hóa đơn nhà hàng
Viết một chương trình tính thuế và tip trên một hóa đơn nhà hàng cho vị khách quen 
với số tiền phải trả cho bữa ăn là 88.67 đô. Thuế là 6.75 phần trăm chi phí bữa ăn. 
Tiền tip là 20 phần trăm tổng tiền sau khi cộng thêm thuế. Hiển thị chi phí bữa ăn, 
số tiền thuế, số tiền tip, và tổng hóa đơn ra màn hình.
*/
// yeu cau tinh thue va tip tren mot hoa don nha hang cho vi khach quen với so tien phai tra cho bua an là 88.67 do 
//Tinh so tien thue, biet rang: Thue bang 6.75% chi phi bua an
//Tinh tien tip, biet rang: Tien tip bang 20% cua tong tien sau khi đa cong thêm thue
//tinh tong hoa don , bang : chi phi bua an + thue + tip 
//in ra man hinh 
// buoc 1 Xac đinh du lieu ban đau
// buoc 2 Tinh tien thue = 88.67 * 67.5%
// buoc 3 tinh tong tien sau thue = 88.67 + tien thue
// buoc 4 tinh tien tip 20% = tong sau thue * 20%
// buoc 5 tinh tong hoa don = tong sau thue + tien tip 
// in ra man hinh <<cout << endl;

#include <iostream>
using namespace std ;
int main (){
	// buoc 1 
	float  chiphi = 88.67;
    float  thuebang = 0.0675;  // 6.75%
    float  tip  = 0.20;    // 20%

    // buoc 2 Tinh tien thue
    float  tienthue = chiphi * thuebang;

    // buoc 3 Tong sau thue
    float  tongsauthue = chiphi + tienthue;

    // buoc 4 Tinh tien tip
    float  tientip = tongsauthue * tip;

    // buoc 5 Tong hoa đon
    float  tonghoadon = tongsauthue + tip;

    // In ket qua
    cout << "Chi phi bua an: $" <<chiphi << endl;
    cout << "Tien thue: $" <<tienthue << endl;
    cout << "Tien tip: $" <<tip << endl;
    cout << "Tong hoa don: $"<< tonghoadon << endl;

    return 0;
}