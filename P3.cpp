//Một máy ATM đang có 4 loại tiền là 500K, 200K, 100K, 50K. Nhập số tiền muốn rút và liệt kê tất cả các phương án mà máy có thể chi trả. 
//(Ví dụ, nếu rút 200K thì các phương án có thể là: #1: 1 tờ 200K; #2: 2 tờ 100K; #3: 1 tờ 100K + 2 tờ 50K; #4: 4 tờ 50K)

#include <iostream>
using namespace std;

int main()
{   
    int n;
    cout << "Nhap vao so tien ban muon doi: "; cin >> n;
    int t500 = 500000;
    int t200 = 200000;
    int t100 = 100000;
    int t50 = 50000;
    int dem  = 1;
    //Dung vong lap de tim den tat ca cac truong hop cuar 500k, 200k, 100k, 50k
    for(int a = 0; a <= n/ t50; a++)                    //Tim den tat ca truong hop cua 50k
    {
        for(int b = 0; b <= n/ t100; b++)               //Tim den tat ca truong ho cua 100k
        {
            for(int c = 0; c <= n/ t200; c++)           //Tim den tat ca truong ho cua 200k
            {
                for(int d = 0; d <= n/ t500; d++)       //Tim den tat ca truong ho cua 100k
                {
                    //Dung cau lenh dieu kien de gioi han cac truong hop de tim ra ket qua mong muon
                    if(a * t50 + b * t100 + c * t200 + d * t500 == n) 
                    {
                        //Xuat ra man hinh ket qua
                        cout << "Cach " << dem << " :" << endl;
                        if(a > 0) cout << "So to 50k: " << a << endl;
                        if(b > 0) cout << "So to 100k: " << b << endl;
                        if(c > 0) cout << "So to 200k: " << c << endl;
                        if(d > 0) cout << "So to 500k: " << d << endl;
                        dem++;
                    }
                }
            }
        }
    }
    return 0;
}
