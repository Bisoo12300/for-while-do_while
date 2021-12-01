//Nhập vào 1 số nguyên, in ra màn hình cách đọc số nguyên đó.
//Input: 543
//Output: Nam Bon Ba

#include <iostream>
using namespace std;

int main()
{
    long long n;
    long long daoNguoc = 0;
    cout << "Nhap vao so nguyen duong n: "; cin >> n;
    long long n1 = n;
    int dem1 = 0, dem2 = 0;
    //Tim so chu so cua n
    while(n > 0)
    {
        n /= 10;
        dem1++;
    }
    //Dao nguoc so n
    while(n1 > 0)
    {
        daoNguoc = daoNguoc * 10 + n1 % 10;
        n1 /= 10;
    }
    long long daoNguoc2 = daoNguoc;
    //Tim so chu so cua so dao nguoc
    while(daoNguoc > 0)
    {
        daoNguoc /= 10;
        dem2++;
    }
    //Doc cac chu so co trong so dao nguoc
    while(daoNguoc2 > 0)
    {
        switch (daoNguoc2 % 10)
        {
            case 1:
                cout << "Mot ";
                break;
            case 2:
                cout << "Hai ";
                break;
            case 3:
                cout << "Ba ";
                break;
            case 4:
                cout << "Bon ";
                break;
            case 5:
                cout << "Nam ";
                break;
            case 6:
                cout << "Sau ";
                break;
            case 7:
                cout << "Bay ";
                break;
            case 8:
                cout << "Tam ";
                break;
            case 9:
                cout << "Chin ";
                break;
            case 0:
                cout << "Khong ";
                break;
        } 
        daoNguoc2 /= 10;   //cat bo chu so hang don vi cua so dao nguoc
    }
    if(dem1 > dem2) //Neu so chu so cua n nhieu hon so chu so cua so dao nguoc
    {
        for(int i = 1; i <= (dem1 - dem2); i++)
        {
            cout << "Khong ";   //Xuat ra "khong" cho den khi het chenh lech 
        }
    }
    return 0;
}
