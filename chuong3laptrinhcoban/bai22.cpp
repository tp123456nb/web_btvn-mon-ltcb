/*

22. Điểm đông và sôi
Bảng sau liệt kê các điểm đông đặc và sôi của một số chất. Viết một chương trình yêu
cầu người dùng nhập một nhiệt độ và sau đó hiển thị các chất sẽ đông đặc ở nhiệt độ
đó và những chất sẽ sôi ở nhiệt độ đó. Ví dụ, nếu người dùng nhập -20, chương trình
sẽ báo rằng nước sẽ đóng băng và oxy sẽ sôi ở nhiệt độ đó.
Chất Nhiệt độ đông(0F) Nhiệt độ sôi (0F)
Cồn Ethyl -173 172
Thủy ngân -38 676
Oxy -362 -306
Nước 32 -212
*/
// yêucầu người dùng nhập một nhiệt độ và sau đó hiển thị các chất sẽ đông đặc ở nhiệt độ
//đó và những chất sẽ sôi ở nhiệt độ đó
//buoc 1 khai bao bien 
//buoc 2 nhap du lieu dau vao 
//buoc 3 kiem tra so snh 

#include <iostream>
using namespace std;
int main() {
    double nhietDo;
    cout << "Nhap nhiet do (do F): ";
    cin >> nhietDo;
    cout << "\nCac chat se dong dac o nhiet do nay:\n";
    if (nhietDo <= -173)
        cout << "- Con Ethyl\n";
    if (nhietDo <= -38)
        cout << "- Thuy ngan\n";
    if (nhietDo <= -362)
        cout << "- Oxy\n";
    if (nhietDo <= 32)
        cout << "- Nuoc\n";
    cout << "\nCac chat se soi o nhiet do nay:\n";
    if (nhietDo >= 172)
        cout << "- Con Ethyl\n";
    if (nhietDo >= 676)
        cout << "- Thuy ngan\n";
    if (nhietDo >= -306)
        cout << "- Oxy\n";
    if (nhietDo >= 212)
        cout << "- Nuoc\n";
    return 0;
}

