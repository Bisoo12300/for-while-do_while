//VCT nhập n, k. Tính:
//S1 = 1 + 1/2 + … + 1/n
//S2 = 2/1! - 3/2! + 4/3! - 5/4! + … - (2n+1)/2n!
//S3 = n! / k!(n-k)!   

#include <iostream>
using namespace std;

int main()
{
    long long n;
    double tong = 0;
    int k;
    cout << "Nhap n: "; cin >> n;
    cout << "Nhap k (voi k < n): "; cin >> k;
    //Cau 1: S1 = 1 + 1/2 + … + 1/n
    for(int i = 1; i <= n; i++)         // Dung vong lap voi i chay tu 1 den n
    {
        //Xuat cac phep tinh ra man hinh
        if(n == i) cout << "1/" << i << " = ";
        else cout << "1/" << i << " + ";
        //Truyen phep tinh 1/i vao tong
        tong += (float)1/i;     
    }
    cout << tong << endl;
    //Cau 2: S2 = 2/1! - 3/2! + 4/3! - 5/4! + … - (2n+1)/2n!
    tong = 0;
    int giaithua_i = 1;
    //Dung vong lap voi i chay tu 1 den 2n
    for(int i = 1; i <= 2 * n; i++)
    {
        giaithua_i *= i;    // Tinh giai thua cua i
        if(i % 2 == 1) //Neu i le thi thuc hien 
        {
            //Xuat cac phep tinh ra man hinh
            if(i == 1) cout << i + 1 << "/" << i <<"!";
            else cout << " + " << i + 1 << "/" << i <<"!";
            //truyen ket qua cua phep tinh (i + 1) / i! vao tong
            tong += (i + 1) / giaithua_i;
        }
        else //Nguoc lai, neu i chan thi thuc hien
        {
            //Xuat cac phep tinh ra man hinh
            if(2 * n == i) cout << " - " << i + 1 << "/" << i << "!" << " = ";
            else cout << " - " << i + 1 << "/" << i <<"!";
            //truyen ket qua cua phep tinh -(i + 1) / i! vao tong
            tong -= (i+1)/giaithua_i;
        }
    }
    cout << tong << endl;
    //Cau 3: S3 = n! / k!(n-k)!   
    int ketQua = 0;
    int giaiThua_n = 1;
    int giaiThua_k = 1;
    int giaiThua_nk = 1;
    //Tinh n! 
    for(int i = 1; i <= n ; i++) 
    {
        giaiThua_n *= i;              
    }
    //Tinh k!
    for(int i = 1; i <= k ; i++) 
    {
        giaiThua_k *= i;              
    }
    //Tinh (n-k)!
    for(int i = 1; i <= (n - k) ; i++) 
    {
        giaiThua_nk *= i;              
    }
    //Xuat ra man hinh phep tinh
    cout << "(" <<  n << "!) / (" << k <<"! * (" << n - k << "!))" << " = ";
    //Truyen ket qua cua phep tinh n! / k!(n-k)! vao ket qua
    ketQua = giaiThua_n / (giaiThua_k * giaiThua_nk);
    cout << ketQua << endl;   
    return 0;
}
