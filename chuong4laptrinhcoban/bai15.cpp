/*
15. Báo cáo tiền lương (Bắt buộc)
Viết chương trình hiển thị báo cáo lương hàng tuần. Một vòng lặp trong chương trình
sẽ yêu cầu người dùng cung cấp mã số nhân viên, tổng lương, thuế tiểu bang, thuế liên
bang và thuế thu nhập. Vòng lặp sẽ kết thúc khi nhập mã số nhân viên là 0. Sau khi dữ
liệu được nhập, chương trình sẽ hiển thị tổng số tiền lương, thuế tiểu bang, thuế liên
bang, thuế thu nhập và thanh toán ròng.
Xác thực đầu vào: Không chấp nhận số âm cho bất kỳ mục nào đã nhập. Không chấp
nhận các giá trị khấu trừ của tiểu bang, liên bang hoặc thuế thu nhập lớn hơn tổng lương.
Nếu tổng thuế tiểu bang + thuế liên bang + thuế thu nhập cho bất kỳ nhân viên nào lớn
hơn tổng lương, hãy in thông báo lỗi và yêu cầu người dùng nhập lại dữ liệu cho nhân
viên đó.
*/
//yeu cau viet chuong trinh hien thi bao cao luong hang tuan 
//buoc 1 khai bao bien 
//buoc 2 nhap du lieu dau vao 
//buoc 3 kiem tra / so sanh 
//buic 4 tinh tong = (tongluong - (thuetieubang + thuelienbang + thuethunhap))
//buuoc 5 in bao cao 
#include <iostream>
using namespace std;
int main() {
    int manhanvien;
    double tongluong, thuetieubang, thuelienbang, thuethunhap;
    double thongdoanhthu = 0, tongthutieubang = 0, tongthuelienbang = 0;
    double tongthuethunhap = 0, tongthanhtoanrong = 0;
    while (true) {
        cout << "\nNhap ma so nhan vien (0 de ket thuc): ";
        cin >> manhanvien;
        if (manhanvien == 0)
            break;
        do {
            cout << "Nhap tong luong: ";
            cin >> tongluong;
            cout << "Nhap thue tieu bang: ";
            cin >> thuetieubang;
            cout << "Nhap thue lien bang: ";
            cin >> thuelienbang;
            cout << "Nhap thue thu nhap: ";
            cin >> thuethunhap;
            // Kiểm tra dữ liệu không âm
            if (tongluong < 0 || thuetieubang < 0 || thuelienbang < 0 || thuethunhap < 0) {
                cout << "Loi: Khong duoc nhap gia tri am!\n";
                continue;
            }
            // Kiểm tra từng loại thuế
            if (thuetieubang > tongluong || thuelienbang > tongluong || thuethunhap > tongluong) {
                cout << "Loi: Thue khong duoc lon hon tong luong!\n";
                continue;
            }
            // Kiểm tra tổng thuế
            if (thuetieubang + thuelienbang + thuethunhap > tongluong) {
                cout << "Loi: Tong thue lon hon tong luong! Nhap lai.\n";
                continue;
            }
            break; // Dữ liệu hợp lệ
        } while (true);
        // Cộng dồn
        thongdoanhthu += tongluong;
        tongthutieubang += thuetieubang;
        tongthuelienbang += thuelienbang;
        tongthuethunhap += thuethunhap;
        tongthanhtoanrong += (tongluong - (thuetieubang + thuelienbang + thuethunhap));
    }
    // In báo cáo
    cout << "\n====== BAO CAO TIEN LUONG ======\n";
    cout << "Tong luong: " << thongdoanhthu << endl;
    cout << "Tong thue tieu bang: " << tongthutieubang << endl;
    cout << "Tong thue lien bang: " << tongthuelienbang << endl;
    cout << "Tong thue thu nhap: " << tongthuethunhap << endl;
    cout << "Tong thanh toan rong: " << tongthanhtoanrong << endl;
    return 0;
}
