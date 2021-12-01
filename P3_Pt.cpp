//Nhập vào 1 số nguyên dương, kiểm tra các chữ số của số nguyên dương có giảm dần hay tăng
//dần từ trái sang phải không.
//Input: 5436
//Output: Cac chu so khong tang/giam dan tu trai sang phai

#include <iostream>
using namespace std;

int main()
{
    long long n, a1, a2;
    cout << "Nhap so nguyen duong n: "; cin >> n;
    bool flag = true;   //gan gia tri true cho bien flag
    a1 = n % 10;        //gan chu so hang don vi cua n vao bien a2
    n /= 10;            //cat bo chu so hang don vi cua n
    while(n > 0)
    {
        a2 = n % 10;    //truyen gia tri cua chu so hang don vi moi vao bien a2
        if(a2 > a1) flag = false; //neu a2 > a1 thi bien flag mang gia tri false
        a1 = a2;    //truyen gia cua cua bien a2 vao bien a1
        n /= 10;    //cat bo 1 chu so hang don vi vua so sanh va tiep tuc vong lap
    }
    if(flag) cout << "So ban vua nhap co thu tu tang dan!" << endl;
    else cout << "So ban vua nhap khong co thu tu tang dan!" << endl;
    return 0;
}
