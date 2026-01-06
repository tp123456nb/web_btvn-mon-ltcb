/*
23. Màn hình mẫu
Viết chương trình hiển thị Hình 1 bằng 1 vòng lặp và Hình 2 bằng 1 vòng lặp
Hình 1
+
++ 
+++
++++
Hình 2
++++
+++ 
++
+
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s = "";
    // Hình 1
    cout << "Hinh 1:\n";
    for (int i = 1; i <= 4; i++) {
        s += "+";
        cout << s << endl;
    }
    // Hình 2
    cout << "\nHinh 2:\n";
    s = "++++";
    for (int i = 4; i >= 1; i--) {
        cout << s << endl;
        s.pop_back();
    }
    return 0;
}
