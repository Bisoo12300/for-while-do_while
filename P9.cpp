//VCT tìm ước số chung lớn nhất của 2 số nguyên dương M và N.

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Nhap so nguyen duong a: "; cin >> a;
    cout << "Nhap so nguyen duong b: "; cin >> b;
    //Ước chung lớn nhất của hai số nguyên không thay đổi khi thay số lớn hơn bằng hiệu của nó với số nhỏ hơn
    //Dung vong lap de tinh cho den khi a = b thi dung vong lap
    while(a != b)
    {
        if(a > b) a -= b;   //Neu a > b thi thay a bang a - b
        else if(a < b) b -= a;  //Neu b > a thi thay b bang b - a
    }
    cout << "Uoc chung lon nhat la: " << a;
    return 0;
}
