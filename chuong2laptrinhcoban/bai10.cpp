/*

//10. Bảo hiểm bao nhiêu?
//Nhiều chuyên gia tài chính khuyên rằng chủ sở hữu bất động sản nên bảo hiểm ngôi 
//nhà hoặc tòa nhà của họ ít nhất 80% số tiền mà nó sẽ chi phí để thay thế cấu trúc. 
//Viết một chương trình yêu cầu người dùng nhập chi phí thay thế của một tòa nhà, 
//sau đó hiển thị số tiền bảo hiểm tối thiểu mà họ nên mua cho tài sản đó.
*/
//Yêu cầu người dùng nhập chi phí thay thế của một ngôi nhà hoặc tòa nhà.
//Biết rằng mức bảo hiểm tối thiểu nên mua là 80% chi phí thay thế.
//buoc 1 khai bao bien 
//buioc 2 nhap chi phi va so tien 
//buoc 3 tinh so tien bao hiem 
//buoc 4 in ra ket qua 

#include <iostream>
using namespace std;
int main (){
	float chiphithaythe, baohiem;
	//buoc 2 
	cout<<"nhap chi phi thay the cua toa nha : ";
	cin>>chiphithaythe;
	//tinh so tien bao hiem 
	baohiem=chiphithaythe*0.8;
	//buoc 4 in ra ket qua 
	cout <<"so tien bao hiem toi thieu ma ho nen mua cho tai san do la : "<<baohiem<<endl;
	return 0;
}