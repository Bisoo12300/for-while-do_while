//VCT nhập các số thực cho đến khi gặp số 0.
//Xác định số lớn nhất.
//Xác định số thực dương nhỏ nhất.
//Xác định số thực âm gần với -123.45 nhất.

#include <iostream>
using namespace std;

int main()
{
    double n = 1;   //Tao bien n = 1 den khoi chay vong lap
    double max = -9999999999;
    double min1 = 9999999999;
    double min2 = 9999999999;
    double a = 0;
    bool flag1 = false, flag2 = false;
    while(n != 0)   //Dung vong lap de nhap n cho den khi nhap 0
    {
        cout << "Nhap n: "; cin >> n;   //Nhap n
        if(n > max) max = n;    //Neu tim duoc n nao lon hon max thi truyen n do vao max
        if(n < min1 && n > 0) min1 = n;   //Neu tim duoc n > 0 va n < min thi truyen n vao min
        //Tim so thuc am gan nhat voi so -123.45
        if(n < 0 && abs(n + 123.45) < min2)
        {
            min2 = abs(n + 123.45);
            a = n;
        }
        if(n > 0) flag1 = true; //Neu co n > 0 thi flag1 = true
        if(n < 0) flag2 = true; //Neu co n > 0 thi flag2 = true
    }
    cout << "So lon nhat trong cac so vua nhap la: " << max << endl;
    if(flag1) cout << "So thuc duong nho nhat trong cac so vua nhap la: " << min1 << endl;    
    else cout << "Trong cac so ban vua nhap khong co so thuc duong nao! " << endl;
    if(flag2) cout << "Trong cac so vua nhap, so thuc am gan voi -123.45 nhat la: " << a << endl;    
    else cout << "Trong cac so ban vua nhap khong co so thuc am nao! " << endl;
    return 0;
}
