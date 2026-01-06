/*
26. Tạo 1 trang web cá nhân:
Viết một chương trình hỏi người dùng tên của họ, sau đó yêu cầu người dùng nhập một
câu mô tả về bản thân họ. Đây là một ví dụ về màn hình của chương trình:
Enter your name: Julie Taylor Enter
Describe yourself: I am a computer science major, a member of the Jazz club,
and I hope to work as a mobile app developer after I graduate.
Khi người dùng đã nhập đầu vào được yêu cầu, chương trình sẽ tạo một tệp HTML,
chứa đầu vào, cho một trang web đơn giản. Đây là một ví dụ về nội dung HTML, sử
dụng đầu vào mẫu được hiển thị trước đó:
<html >
‹head>
</ head>
‹body>
<center>
<h1>Julie Taylor</h1>
</ center> 
<shr />
I am a computer science major, a member of the Jazz club, and I hope to work as a mobile app developer after I graduate.
 <hr />
</ body> 
</ html>
*/
//yeu cau viet chuong trinh hoi nguoi dung ten cua ho , sau do yeu cau nguoi dung nhap mot cau mo ta ve ban than ho 
//buoc 1 khai bao bien 
//buoc 2 nhap du lieu 
//buoc 3 ghi noi dung html
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string name, description;
    ofstream file;
    // Nhập dữ liệu
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Describe yourself: ";
    getline(cin, description);
    // Mở file HTML
    file.open("personal.html");
    if (!file) {
        cout << "Khong tao duoc file HTML!" << endl;
        return 1;
    }
    // Ghi nội dung HTML
    file << "<html>\n";
    file << "<head>\n";
    file << "</head>\n";
    file << "<body>\n";
    file << "<center>\n";
    file << "<h1>" << name << "</h1>\n";
    file << "</center>\n";
    file << "<hr />\n";
    file << description << "\n";
    file << "<hr />\n";
    file << "</body>\n";
    file << "</html>\n";
    file.close();
    cout << "Da tao file personal.html thanh cong!\n";
    return 0;
}
