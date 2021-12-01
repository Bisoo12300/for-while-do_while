//Nhập vào 1 số nguyên, kiểm tra số đó có phải là số nguyên tố không.
//Input: 12
//Output: Khong phai la so nguyen to

#include <iostream>
using namespace std;

int main()
{
    long long n;
    bool flag = true; //gan gia tri true cho bien flag
    cout << "Nhap vao so nguyen duong n: "; cin >> n;
    //Vi so nguyen to la so chi chia het cho 1 va chinh no
    //vi the ta cho vong lap chay trong khoang tu 2 den n
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)      //neu i chia het cho n
        {
            flag = false;   //gan gia tri flase cho bien flag va thoat khoi vong lap
            break;
        }
    }
    if(flag) cout << "Day la so nguyen to!" << endl;
    else cout << "Day khong phai la so nguyen to!" << endl;
    return 0;
}
