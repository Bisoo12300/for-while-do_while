#include <iostream>
#include <ctime>
#include <conio.h>
#include <Windows.h>
using namespace std;

//Khai bao ham lay gio phut giay
void layGioPhutGiay(int& h, int& m, int& s);

//Khai bao ham xuat ket qua ra vi tri mong muon tren console
void gotoxy(int x, int y);

//Khai bao ham xuat gio, phut giay theo dung dinh dang
void Xuat(int h, int m, int s);

//Khai bao ham dinh dang lai gio
void Gio(int h);

//Khai bao ham dinh dang lai phut
void Phut(int m);

//Khai bao ham dinh dang lai giay
void Giay(int s);

//Khai bao ham dinh dang AM hay PM
void AmHayPm(int h);

//Khai bao ham nhap vao so giay can dem
void Nhap(int& n);

int main()
{
	int h, m, s, n, h1, m1, s1;	
	Nhap(n);					//Nhap vao so giay can dem	
	layGioPhutGiay(h, m, s);	//Lay gio phut giay hien tai
	//Dung vong lap cho den khi n = 0
	while (n != 0)
	{
		layGioPhutGiay(h1, m1, s1);	//Lay gio phut giay luc sau
		if (h1 != h || m1 != m || s1 != s)	//Neu gio phut giay luc sau khac gio phut giay luc dau thi thuc hien:
		{
			gotoxy(0, 4);	//Xuat ket qua o vi tri mong muon			
			Xuat(h, m, s);	//Xuat ra man hinh ket qua gio phut giay theo dung dinh dang
			h = h1;			//Gan gio ban dau bang gio luc sau
			m = m1;			//Gan phut ban dau bang phut luc sau
			s = s1;			//Gan giay ban dau bang giay luc sau
			n--;			//Giam n di 1 don vi
		}

		if (kbhit())	//Dung ham kbhit() de kiem tra xem co nhap phim hay khong
		{
			int batPhim = getch();		//Tao bien luu tru phim duoc nhap vao
			if (batPhim == 27) break;	//27 la ma ASCII cua phim ESC trong he thap phan
		}

		if (s1 == 0) Beep(750, 300);	//Neu giay luc sau bang 0 thi phat ra tieng beep
	}
	return 0;
}

//Dinh nghia ham lay gio phut giay
void layGioPhutGiay(int& h, int& m, int& s)
{
	time_t now = time(0);
	tm* ltm = localtime(&now);
	h = ltm->tm_hour;
	m = ltm->tm_min;
	s = ltm->tm_sec;
}

//Dinh nghia ham xuat ket qua ra vi tri mong muon tren console
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//Dinh nghia ham xuat gio, phut giay theo dung dinh dang
void Xuat(int h, int m, int s)
{
	Gio(h);
	cout << ":";
	Phut(m);
	cout << ":";
	Giay(s);
	AmHayPm(h);
}

//Dinh nghia ham dinh dang lai gio
void Gio(int h)
{
	if (h > 12) h -= 12;	//Neu gio > 12 thi gio bang gio tru 12
	if (h < 10) cout << "0" << h;	//Neu gio < 10 thi xuat gio ra dung dinh dang 
	else cout << h;
}

//Dinh nghia ham dinh dang lai phut
void Phut(int m)
{
	if (m < 10) cout << "0" << m;	//Neu phut < 10 thi xuat phut ra dung dinh dang 
	else cout << m;
}

//Dinh nghia ham dinh dang lai giay
void Giay(int s)
{
	if (s < 10) cout << "0" << s;	//Neu giay < 10 thi xuat giay ra dung dinh dang 
	else cout << s;
}

//Dinh nghia ham dinh dang AM hay PM
void AmHayPm(int h)
{
	if (h > 12) cout << " PM" << endl;	//Neu gio > 12 thi xuat ra PM
	else cout << " AM" << endl;			//Nguoc lai thi xuat ra AM
}

//Dinh nghia ham nhap vao so giay can dem
void Nhap(int& n)
{
	cout << "Nhap so giay can dem: "; cin >> n;
	while (n <= 0)
	{
		cout << "So giay phai la mot so nguyen duong!" << endl;
		cout << "Nhap so giay can dem: "; cin >> n;
	}
}