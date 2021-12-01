//VCT tính căn bậc ba của một số thực chính xác đến 0.001 – áp dụng thuật toán nhị phân, không dùng đến các hàm tính toán.

#include <iostream>
using namespace std;

int main() 
{
    double x;
    double i = 0;
    cout << "Nhap x: "; cin >> x;
    double a = abs(x); //Tao bien luu tru gia tri tuyet doi cua a
    while(i*i*i < a - 0.001) 
    {
        i = i + 0.001; // sau moi lan lap thi tang i len 0.01 cho den khi tim duoc i^3 = a
    }
    if(x < 0) i = - i; //Neu x la so am thi can bac 3 cua x cung la mot so am
    cout << "Can bac 3 cua " << x << " la: " << i;
    return 0;
}
