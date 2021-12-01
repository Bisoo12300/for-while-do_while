#include <iostream>
using namespace std;

int main()
{
    int n = 1; //Gan bien n = 1 de chay vong lap
    while(n != 0) //Vong lap tiep tuc chay cho den khi nhap n = 0
    {
        cout << "Nhap n: "; cin >> n;   // Tiep tuc nhap n
        if(n == 0) break;   // Neu n = 0 thi thoat khoi vong lap
        else 
        {
            int n1 = n;
            int tachSo;
            int tong = 0;
            int tich = 1;
            //Khoi tao vong lap tach tung chu so cua n
            while(n1 > 0)
            {
                tachSo = n1 % 10;   //Tach chu so hang don vi cua n
                tong += tachSo; //Cong tung gia tri cua chu so hang don vi vao tong
                tich *= tachSo; //Nhan tung gia tri cua chu so hang don vi vao tich
                n1 /= 10;   //Cat bo chu so hang don vi vua tach
            }
            //Neu tong = tich thi xuat "Tong cua ca chu so bang tich cua cac chu so!"
            //Nguoc lai thi xuat "Tong cua ca chu so khong bang tich cua cac chu so!"
            if(tong == tich) cout << "Tong cua ca chu so bang tich cua cac chu so!" << endl;
            else cout << "Tong cua ca chu so khong bang tich cua cac chu so!" << endl;
        }
    }
    return 0;
}