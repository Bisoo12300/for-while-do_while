//Nhập vào 1 số nguyên dương, liệt kê tất cả các ước số của số nguyên dương. Cho biết có bao
//nhiêu ước số và tìm tổng của tất cả các ước số đó.
//Input: 16
//Output: Cac uoc so la 1 2 4 8 16
//Co 5 uoc so
//Tong cac uoc so la 31

#include <iostream>
using namespace std;

int main()
{
    long long n;
    long long tong = 0;
    long dem = 0;
    cout << "Nhap vao so nguyen duong n: "; cin >> n;
    cout << "Cac uoc so cua n la: ";
    for(long long i = 1; i <= n; i++)
    {
        if(n % i == 0) //Neu i chia het cho n thi i la uoc cua n
        {
            cout << i << " "; //xuat ra cac uoc i cua n
            tong += i;  //truyen gia tri i tim duoc vao tong
            dem++;      //Voi moi i tim duoc thi tang bien dem len 1 lan
        }
    }
    cout << "\nCo " << dem << " uoc so"<< endl;
    cout << "Tong cua cac uoc so la: " << tong << endl;
    return 0;
}
