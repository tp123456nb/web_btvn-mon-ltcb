//sua file ngay thang thanh switch case
#include <iostream>
using namespace std;
int main(){
	// bước 1: khai báo biến
	int thang;
	cout<<"moi nhap thang";
	cin>>thang;
	//dung switch case
	switch (thang){
		case 1 : cout << "31" ;
		    break;
		case 2 : cout << "28" ;
	    	break;
		case 3 : cout << "31" ;
		    break;
		case 4 : cout << "30" ;
		    break;
		case 5 : cout << "31" ;
		    break;
		case 6 : cout << "30" ;
		    break;
		case 7 : cout << "31" ;
		    break;
		case 8 : cout << "30" ;
		    break;
		case 9 : cout << "31" ;
		    break;
		case 10 : cout << "30" ;
		    break;
		case 11 : cout << "31" ;
		    break;
		case 12 : cout << "30" ;
		    break;
		default : cout << "ban nhap sai thang ";
	}
}