//Nhập vào 1 số nguyên, tính tổng các chữ số của số nguyên đó.
//Input: 543
//Output: Tong cac chu so la 12 

#include <iostream>
using namespace std;

int main()
{
    long long n;
    long tong = 0;
    cout << "Nhap vao so nguyen duong n: "; cin >> n;
    while(n > 0)
    {
        tong += n % 10;     //truyen chu so hang don vi vao tong
        n /= 10;            // cat bo chu so hang don vi vua truyen vao tong
    }

    cout << "Tong cac chu so cua so ban vua nhap vao la: " << tong << endl;
    return 0;
}
