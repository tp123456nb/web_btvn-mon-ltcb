/*

//14. Thuế bán hàng theo tháng
//Một công ty bán lẻ phải nộp một báo cáo thuế bán hàng hàng tháng liệt kê doanh thu 
//trong tháng và số thuế bán hàng đã thu được. Viết một chương trình yêu cầu nhập 
//tháng, năm và tổng số tiền thu được tại máy tính tiền (tức là doanh thu cộng với thuế
//bán hàng). Giả sử thuế bán hàng của tiểu bang là 4 phần trăm, và thuế bán hàng của 
//quận là 2 phần trăm.
//Nếu biết tổng số tiền thu được và tổng số thuế bán hàng là 6 phần trăm, thì số tiền 
//bán sản phẩm có thể được tính như sau:
//Trong đó, S là doanh thu bán sản phẩm, và T là tổng thu nhập (doanh thu bán sản 
//phẩm cộng với thuế bán hàng).
//Một báo cáo của chương trình có thể tương tự như dưới đây:
//total collecter:26572.89
//sales:25068.76
//county sales tax:501.38
//state sales tax :1002.76
//total sales tax: 1504.13
*/
//yeu cau 
//Tinh:
//Doanh thu ban san pham
//Thue ban hang cua quan (2%)
//Thue ban hang cua tieu bang (4%)
//Tong thue ban hang
//buoc 1 khai bao bien 
//buoc 2 nhap du lieu 
//buoc 3 tinh 
//doanhthubansanpham=tienthu/1.06
//thuequa=doanhthubansanpham*0.02
//thuetieubang=doanhthubansanpham*0.04
//tongthue=thuequa+thuetieubang
//buoc 4 in ra ket qua 

#include <iostream>
using namespace std;
int main (){
	float thang,nam,doanhthubansanpham,tienthu,thuequan,thuetieubang,tongthue;
	//buoc 2 khai bao bien 
	cout<<"nhap thang ; ";
	cin>>thang;
	cout<<"nhap nam ; ";
	cin>>nam;
	cout <<"nhap so tien thu duoc : ";
	cin>>tienthu;
	//buoc 3 tinh 
	doanhthubansanpham=tienthu/1.06;
	thuequan=doanhthubansanpham*0.02;
	thuetieubang=doanhthubansanpham*0.04;
	tongthue=thuequan+thuetieubang;
	//buoc 4 in ra ket qua 
	cout << "thang: " << thang << " nam" << nam << endl;
    cout << "-------------------------" << endl;
    cout << "Tong tien thu $ " << tienthu << endl;
    cout << "doanh thu ban san pham :$ " << 	doanhthubansanpham<< endl;
    cout << "thue quan:$ " << 	thuequan << endl;
    cout << "thue tieu bang: $ " << thuetieubang << endl;
    cout << "thong thue: $ " <<  tongthue<< endl;
    return 0;
}