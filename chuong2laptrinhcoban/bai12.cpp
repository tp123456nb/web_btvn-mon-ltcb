/*

//12. Celsius to Fahrenheit (Bắt buộc)
//Viết một chương trình chuyển đổi giá trị giữa hai đơn vị đo nhiệt độ là Celsius và 
//Fahrenheit. Với công thức chuyển đổi là F=9/5C +32
//Trong đó F là nhiệt độ trong đơn vị Fahrenheit, và C là nhiệt độ trong đơn vị Celsius.
*/

#include <iostream>
using namespace std;
int main() {
    float celsius, fahrenheit;
    cout << "Nhap nhiet do Celsius: ";
    cin >> celsius;
    fahrenheit = (9.0 / 5.0) * celsius + 32;
    cout << "Nhiet do Fahrenheit tuong ung la: " <<fahrenheit<<endl;
    return 0;
}
