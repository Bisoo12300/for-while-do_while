//Xác định phần tử thứ k của dãy Fibonacci:  F(0)=0;  F1=(1);  F(n)=F(n-1)+F(n-2) 

#include <iostream>
using namespace std;

int main()
{
    int k;
    int f0 = 0, f1 = 1;
    int f;
    cout << "Nhap phan tu thu k can tim : "; cin >> k;
    if(k == 0) f = 0;   //Neu k = 0 thi f = f0 = 0 theo gia thiet de bai cho
    else if(k == 1) f = 1;      //Neu k = 1 thi f = f1 = 1 theo gia thiet de bai cho
    else    //Neu k khac 0 va khac 1 thi thuc hien:
    {
        int i = 2;  //Gan gia tri 2 cho bien chay i
        while(i <= k)   //Cho i chay tu 2 den k
        {
            f = f0 + f1;    //Cho f = f0 + f1
            f0 = f1;        //Truyen gia tri f1 cho f0
            f1 = f;         //Truyen gia tri f1 cho f
            i++;            //Tang i them 1 don vi va tiep tuc vong lap
        }
    }
    cout << "Phan tu thu k co gia tri la: " << f;
    return 0;
}
