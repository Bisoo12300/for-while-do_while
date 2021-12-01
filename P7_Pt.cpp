//Nhập vào 2 số nguyên M và N, với M<N. Đếm số lượng các số chẵn trong [M,N] và tính tổng các
//số đó.
//Input: 5 12
//Output: So luong so chan la 4
//Tong cac so chan la 36

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int dem = 0;
    int tong = 0;
    cout << "Nhap vao so nguyen duong m: "; cin >> m;
    cout << "Nhap vao so nguyen duong n voi n > m: "; cin >> n;
    //Tao vong lap voi i chay tu m den n
    for(int i = m; i <= n; i++)
    {
        if(i % 2 == 0)  //Neu i chia het cho 2
        {
            tong += i;     // thi truyen gia tri i vao bien tong
            dem++;         // moi lan co i thoa man thi bien dem tang len 1 don vi
        }
    }
    cout << "So so chan la: " << dem << endl;
    cout << "Tong cac so chan la: " << tong << endl;
    return 0;
}
