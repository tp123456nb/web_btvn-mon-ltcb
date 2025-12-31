/*

//7. Rạp chiếu phim
//Một rạp chiếu phim được giữ lại 20% tổng doanh thu thu được từ việc bán vé. Phần 
//còn lại chuyển cho nhà phân phối phim. Viết chương trình tính số tiền cho phòng vé 
//và nhà phân phối. Chương trình cần yêu cầu nhập tên phim, số vé cho người lớn và 
//số vé cho trẻ em đã được bán. 
//Biết: 
//- Giá vé cho người lớn là 10 đô la; 
//- Giá vé cho trẻ em là 6 đô la.
*/
//yeu cau Tính:
//Tổng doanh thu bán vé
//Số tiền rạp giữ lại (20% doanh thu)
//Số tiền chuyển cho nhà phân phối phim (80%)
//buoc 1 khai bao bien 
//buoc 2 nhap ten phim ,so ve 
//buoc 3 tinh gia tri 
//buoc 4 in ra ket qua 
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main (){
	//buoc 1 khai bao bien 
	double giavenguoilon=10;
	double giavetreem=6;
	int venguoilon,vetreem;
	string tenphim;
	////buoc 2 nhap ten phim ,so ve 
	cout<<"nhap ten phim : ";
	getline(cin,tenphim);
	cout<<"nhap so ve nguoi lon : ";
	cin>>venguoilon;
	cout<<"nhap so ve tre em : ";
	cin>>vetreem;
	//buoc 3 tinh gia tri 
	double doanhthu=venguoilon*giavenguoilon+vetreem*giavetreem;
	double tienrapgiulai=doanhthu*0.20;
	double tienchuyennhaphanphoi=doanhthu*0.80;
	//buoc 4 in ra ket qua 
	cout<<"ten phim la : "<<tenphim<<endl;
	cout<<"tong doanh thu ban ve la : "<<doanhthu<<endl;
	cout <<"so tien rap giu lai la : "<<tienrapgiulai<<endl;
	cout<<"so tien chuyen cho nha phan phoi la : "<<tienchuyennhaphanphoi<<endl;
	return 0;
	
	
}