#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Nhap a: "; cin >> a;
    cout << "Nhap b: "; cin >> b;
    cout << "Nhap c: "; cin >> c;
    if(a < b && b < c)  //Dieu kien de tim cac so tang dan theo thu tu
    {
        cout << "Cac so ban vua nhap co thu tu tang dan!" << endl;
        cout << "Giai bat phuong trinh: ax^2 + bx + c > 0" << endl;
        if(a == 0) // Neu a = 0 thi thuc hien xuat ra ket qua 
        {            
            //vi a < b < c va a = 0 nen b va c khong the bang 0
            cout << "Tap nghiem cua bat phuong trinh la: x > " << (- c) / b;     
        } 
        else //Neu a khac 0
        {
            double delta = b * b - 4 * a * c;   // tinh delta
            if(delta < 0)   // Neu delta < 0
            {
                if(a > 0) cout << "Bat phuong trinh luon dung voi moi x" << endl;
                else cout << "Khong co gia tri x nao thoa man bat phuong trinh!" << endl;
            }
            else if(delta == 0) //Neu delta = 0
            {
                if(a > 0) cout << "Bat phuong trinh dung voi moi x khac " << (-b)/ (2*a) << endl;
                else cout << "Khong co gia tri x nao thoa man bat phuong trinh!" << endl;
            }
            else //Neu delta  > 0
            {
                if(a > 0)
                {
                    cout << "Bat phuong trinh dung voi: " << endl;
                    cout << "x < " << (- b - sqrt(delta)) / (2 * a) << " , x > " << (- b + sqrt(delta)) / (2 * a);
                }
                else 
                {
                    cout << "Bat phuong trinh dung voi: " << endl;
                    cout << (- b + sqrt(delta)) / (2 * a) << " < x < " << (- b - sqrt(delta)) / (2 * a) ;
                }
            }
        } 
    }
    else if(a > b && b > c) //Dieu kien de tim cac so tang dan theo thu tu
    {
        cout << "Cac so ban vua nhap co thu tu giam dan!" << endl;
        cout << "Giai bat phuong trinh: ax^2 + bx + c < 0" << endl;
        if(a == 0) // Neu a = 0 thi thuc hien xuat ra ket qua 
        {  
            //vi a > b > c va a = 0 nen b va c khong the bang 0          
            cout << "Tap nghiem cua bat phuong trinh la: x > " << (- c) / b << endl;     
        } 
        else //Neu a khac 0
        {
            double delta = b * b - 4 * a * c;   //Tinh delta
            if(delta < 0)   //Neu delta < 0
            {
                if(a > 0) cout << "Khong co gia tri x nao thoa man bat phuong trinh!" << endl;
                else cout << "Bat phuong trinh luon dung voi moi x" << endl;
            }
            else if(delta == 0) //Neu delta = 0
            {
                if(a > 0) cout << "Khong co gia tri x nao thoa man bat phuong trinh!" << endl;
                else cout << "Bat phuong trinh dung voi moi x khac " << (-b)/ (2*a) << endl;                
            }
            else    //Neu delta > 0
            {
                if(a > 0)
                {
                    cout << "Bat phuong trinh dung voi: " << endl;
                    cout << (- b - sqrt(delta)) / (2 * a) << " < x < " << (- b + sqrt(delta)) / (2 * a) ;
                }
                else 
                {
                    cout << "Bat phuong trinh dung voi: " << endl;
                    cout << "x < " << (- b + sqrt(delta)) / (2 * a) << " , x > " << (- b - sqrt(delta)) / (2 * a);
                }
            }
        } 
    }
    else //Con lai la cac so khong tang va khong giam theo thu tu
    {
        cout << "Cac so ban vua nhap co thu tu khong tang khong giam!" << endl;
        cout << "Giai phuong trinh ax^2 + bx + c = 0" << endl;
        if(a == 0) //Neu a = 0
        {
            if(b == 0) //Neu b = 0
            {
                if(c == 0) cout << "Phuong trinh vo so nghiem!" << endl;    //Neu c = 0
                else cout << "Phuong trinh vo nghiem!" << endl;             //Neu c khac 0
            } 
            else cout << "Nghiem cua phuong trinh la: x = " << (- c) / b;  //Neu b khac 0      
        } 
        else //Neu a khac 0
        {
            double delta = b  *b - 4 * a * c;
            if(delta < 0) cout << "Phuong trinh vo nghiem!" << endl;    //Neu delta < 0
            else if(delta == 0) cout << "Phuong trinh co nghiem kep: x = " << (- b) / (2 * a);  //Neu delta = 0
            else    //Neu delta > 0
            {
                cout << "Phuong trinh co hai nghiem phan biet! " << endl;
                cout << "x1 = " << (- b + sqrt(delta)) / (2 * a) << endl;
                cout << "x2 = " << (- b - sqrt(delta)) / (2 * a) << endl;
            }
        } 
    }
    return 0;
}