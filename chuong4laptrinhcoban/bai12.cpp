/*12. Bảng độ C sang độ F:
Viết chương trình hiển thị bảng nhiệt độ C từ 0 - 20 và độ F tương đương. Biết công
thức chuyển đổi từ độ C sang độ F như sau:F=9/5C+32
Trong đó: F là độ F; C là độ C
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << "Bang chuyen doi do C sang do F\n";
    cout << "-------------------------------\n";
    cout << "Celsius (C)\tFahrenheit (F)\n";
    for (int C = 0; C <= 20; C++) {
        double F = (9.0 / 5.0) * C + 32;  // Công thức chuyển đổi
        cout << setw(5) << C << "\t\t" << fixed << setprecision(1) << F << endl;
    }
    return 0;
}
