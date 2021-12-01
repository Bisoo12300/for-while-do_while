//VCT nhập một số nguyên dương n. Xác định:
//Tổng các chữ số của số vừa nhập có bằng tích.
//Các chữ số này có tăng dần hay giảm dần không?
//Số này có phải là số đối xứng? (các chữ số đối xứng, vd: 77, 191, 2002,..)
//Số này có phải là số nguyên tố?
//Số này có phải là số hoàn chỉnh (bằng tổng các ước nhỏ hơn nó, vd 6 = 1+2+3)

#include <iostream>
using namespace std;

int main() 
{
    int n;
    int tachSo = 0, tong = 0;
    cout << "Nhap so nguyen duong n: "; cin >> n;
    //Cau 1: Tinh tong cac chu so cua so vua nhap
    int n1 = n;
    //Dung vong lap de tach chu so hang don vi cua n cho den het
    while(n1 > 0) 
    {
        tachSo = n1 % 10;   //Tach chu so hang don vi ra khoi n
        tong += tachSo;     //Truyen chu so hang don vi vao tong
        n1 /= 10;           //Bo chu so hang don vi ma ta vua tach
    }
    cout << "Tong cac chu so cua so ban vua nhap la: " << tong << endl;

    //Cau 2: Cac chu so cua so ban vua nhap co tang dan hay khong
    int a1, a2;
    int n2 = n;
    bool flag = true;   //Gan gia tri true cho bien flag
    a1 = n2 % 10;       //Truyen chu so hang don vi vao bien a1
    n2 /= 10;           //Loai bo chu so hang don vi vua tach
    while(n2 > 0)
    {
        a2 = n2 % 10;   //Truyen chu so hang don vi moi vao bien a2
        if(a2 > a1)
        {
            flag = false;   //Neu a1 < a2 thi flag mang gia tri false
        }
        a1 = a2;        //Truyen gia tri cua a2 vao a1
        n2 /= 10;       //Loai bo chu so hang don vi va tiep tuc vong lap
    }
    if(flag) cout << "So ban vua nhap dung theo thu tu tu cao den thap!" << endl;
    else cout << "So ban vua nhap khong dung theo thu tu tu cao den thap!" << endl;

    //Cau 3: So ban vua nhap co phai la so doi xung hay khong
    int n3 = n;
    int soDaoNguoc = 0;
    while(n3 > 0)
    {
        soDaoNguoc = soDaoNguoc * 10 + n3 % 10;     //Dao nguoc vi tri cac chu so cua so ban nhap vao
        n3 /= 10;                                   //Loai bo mot chu so hang don vi va tiep tuc vong lap
    }
    //Neu so dao nguoc bang so ban dau nhap vao thi so ban nhap chinh la so doi xung
    if(soDaoNguoc == n) cout << "Day la so doi xung!" << endl;
    else cout << "Day khong phai la so doi xung!" << endl;

    //Cau 4: So ban co phai la so nguyen to khong
    flag = true;
    //So nguyen to la so chi chia het cho 1 va chinh no, 
    //vi the ta dung vong lap de kiem tra trong khoang tu 2 den n co so nao chia het cho n khong
    for(int i = 2; i < n; i++) {
        if(n % i == 0)
        {
            flag = false; //Neu tim duoc i chia het cho n thi thoat vong lap va truyen gia tri false cho bien flag
            break;
        }
    }
    if(flag) cout << "Day la so nguyen to" << endl;
    else cout << "Day khong phai la so nguyen to" << endl;
    //Cau 5: So ban vua nhap co phai la so hoan chinh khong
    tong = 0;
    //Dung vong lap de tim cac so chia het cho n
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0) tong += i; //Neu i chia het cho n thi truyen i vao tong
    }
    if(tong == n) cout << "Day la so hoan chinh!" << endl; //Neu tong cua cac uoc bang n thi do la so hoan chinh
    else cout << "Day khong phai la so hoan chinh!" << endl;
    return 0;
}
