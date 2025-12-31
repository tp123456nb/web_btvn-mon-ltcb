/*

3. Thuế bán hàng (Bắt buộc)
Viết một chương trình tính tổng thuế bán hàng trên một giỏ hàng 95 đô. Giả sử thuế bán 
hàng của một tiểu bang là 4 phần trăm, và thuế bán hàng của quận là 2 phần trăm.
*/
// yeu cau tinh tong thue ban hang tren mot gio hang 95 do 
// voi cong thuc tinh thue tieu bang = gia thue * thue tieu bang (%)
//voi cong thuc tinh thue  quan = gia hàng * thue quan (%)
// cong thuc tong thue = thue tieu bang + thue quan 
// cong thuc tinh tong tien phai tra = gia + tong thue 
// in ra man hinh 
// giai bai toan 
// buoc 1 xac dinh du lieu ban dau 
// buoc 2 tinh tien thue cua tieuu bang
// buoc 3 tinh tien thue cua quan
// buoc 4 tinh tong thue
// buoc 5 tinh tong tien phau tra
// in ra man hinh << cout << endl;

#include <iostream>
using namespace std;
int main (){
	// Bước 1: Khai báo dữ liệu ban đầu
    float  gia = 95.0;
    float  thueTieuBang = gia * 0.04;  // Bước 2
    float  thueQuan = gia * 0.02;      // Bước 3

    // Bước 4: Tính tổng thuế
    float  tongThue = thueTieuBang + thueQuan;

    // Bước 5: Tính tổng cộng
    float  tongCong = gia + tongThue;

    // In kết quả
    cout << "Thue tieu bang: " << thueTieuBang << " USD" << endl;
    cout << "Thue quan : " << thueQuan << " USD" << endl;
    cout << "Tong thue : " << tongThue << " USD" << endl;
    cout << "Tong cong phai tra : " << tongCong << " USD" << endl;

    return 0;
}
