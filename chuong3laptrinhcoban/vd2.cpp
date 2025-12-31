// nhập số bất kỳ
// kiểm tra theo số đó là chẵn
// đầu vào : một số 
// đầu ra : tính chẵn
#include <iostream>
using namespace std;
int main(){
	// bước 1: khai báo biến số nguyên tên là so
	int so;
	// bước 2: nhập vào giá trị cho số 
	cout << "moi nhap so \n";
	cin >> so;
	// bước 3: kiểm tra tính chan 
	if(so%2 == 0){
		cout << so <<"so chan";
	}
	return 0;
}