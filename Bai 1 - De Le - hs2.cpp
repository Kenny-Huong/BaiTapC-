#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

struct doibong
{
	string 		ma, ten;
	int 		tuoi, huychuong;
	long int 	thuong;
};

void nhap (doibong &x)
{
	cin.ignore();
	cout <<	"\nNhap ma cau thu: "		; getline(cin,x.ma);
	cout <<	"Nhap ten cau thu: "		;getline(cin,x.ten);
	cout <<	"Nhap tuoi cau thu: "		; cin >> x.tuoi;
 	cout <<	"Nhap so luong huy chuong: "; cin >> x.huychuong;

	if (x.huychuong > 5)
		x.thuong = 500000;
	else if (x.huychuong > 3)
		x.thuong = 300000;
	else if (x.huychuong > 2)
		x.thuong = 200000;
	else
		x.thuong = 0;
}

void nhap_dsach (int n, doibong a[])
{
	for (int i=0; i<n; i++)
	{
		cout <<	"\nNhap cau thu thu " << i + 1 << endl;
		nhap (a[i]);
	}	

}

void tieude()
{

	cout <<	"Ma CT        Ten cau thu    Tuoi  So huy chuong   Thuong  " << endl;
}

void xuat (doibong x)
{
	cout << " " << x.ma
		 << " " << setw(20) << x.ten
		 << " " << setw(6)  << x.tuoi
		 << " " << setw(15) << x.huychuong
		 << " " << setw(10) << x.thuong
	 	 << " " << endl;
}

void xuat_dsach (int n, doibong a[])
{
	cout <<	"\n";
	tieude();
	for (int i = 0; i < n; i++)
	xuat (a[i]);
}
void giam (int &n, doibong a[])
{
	cout <<	"\n\n   Danh sach sap xep giam dan:\n";
	doibong tg;
	for (int i = 0; i < n; i++)
	{	
		for (int j = i + 1; j < n; j++)
		{
			if (a[i].tuoi < a[j].tuoi)
				{
					tg 	 = a[i];
					a[i] = a[j];
					a[j] = tg;
				}
		}
	}
xuat_dsach(n,a);
}

int main ()
{
	doibong a[100];
	int n;
	cout <<"So cau thu la: "; cin >> n;
	while (n<1)
	{
		cout << "\tNhap lai so cau thu: ";
		cin >> n;
	}
	nhap_dsach(n,a);
	xuat_dsach(n,a);
	giam(n,a);
}






























