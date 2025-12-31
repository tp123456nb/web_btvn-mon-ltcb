/*

//17. Hoa hồng chứng khoán
//Kathryn đã mua 750 cổ phiếu với giá 35.00 USD / cổ phiếu. Cô ấy phải trả cho người 
//môi giới chứng khoán của mình khoản hoa hồng 2% cho giao dịch. Viết một chương 
//trình tính toán và hiển thị như sau:
//− Số tiền thanh toán cho cổ phiếu (không có hoa hồng).
//− Số tiền hoa hồng.
//− Tổng số tiền đã thanh toán (tổng cho cổ phiếu cộng với tiền hoa hồng).
*/
//yeu cau Số tiền thanh toán cho cổ phiếu (không tính hoa hồng).
//Số tiền hoa hồng (2% của tiền cổ phiếu).
//Tổng số tiền đã thanh toán (tiền cổ phiếu + hoa hồng).
// buoc 1 khai bao bien 
//buoc 2 tinh gia tri
//gia von co phan gap doi =so co phan * gia moi co phieu
//hoa hong = gia von hang ton*ty le hoa hong 
//tong = hia von hang ton + hoa hong 
//buoc 3 in ra ket qua

#include <iostream>
using namespace std;
int main (){
	//buoc 1 khai bao bien
	int socophan=750;
	float giamoicophan=35.00;
	float tylehoahong=0.02;
	//buoc 2 tinh gia tri
	float giavoncophangapdoi =socophan * giamoicophan;
	float hoahong = giavoncophangapdoi*tylehoahong;
	float tong = giavoncophangapdoi + hoahong ;
	//buoc 3 in ra ket qua 
	cout <<"so tien thanh toan cho co phieu la : "<<giavoncophangapdoi<<endl;
	cout <<"so tien hoa hong la : "<<hoahong<<endl;
	cout <<"tong so tien da thanh toan la : "<<tong<<endl;
	return 0;
	
}