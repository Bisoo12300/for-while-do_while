//. Nhập vào 1 số nguyên dương, tìm chữ số lớn nhất và chữ số nhỏ nhất của số nguyên dương.
//Input: 5436
//Output: Chu so lon nhat là 6
//Chu so nho nhat la 3

#include <iostream>
using namespace std;

int main()
{
    long long n;
    cout << "Nhap so nguyen duong n: "; cin >> n;
    int max = 0;
    int min = 9;
    int donVi = 0;
    while(n > 0)
    {
        donVi = n % 10;     //Lay chu so hang don vi cua n
        if(donVi >= max) max = donVi;   //Neu chu so hang don vi vua lay lon hon max thi truyen so do vao max
        if(donVi <= min) min = donVi;   //Neu chu so hang don vi vua lay nho hon min thi truyen so do vao min       
        n /= 10;  //Cat bo 1 chu so hang don vi cua n
    }
    cout << "So lon nhat la: " << max << endl;
    cout << "So nho nhat la: " << min << endl;
    return 0;
}
