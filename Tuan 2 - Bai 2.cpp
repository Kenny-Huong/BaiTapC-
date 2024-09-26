#include <iostream>
#include <string.h>
#include <iomanip> 
using namespace std;

class GV{
	private:
		char ht[30], bc[15], cn[20];
		int t;
		float bl, lcb;
	public:
		GV()
		{
			strcmp(ht, " ");
			strcmp(bc, " ");
			strcmp(cn, " ");
			t = bl = lcb = 0;
		}
		void nhap();
		void xuat();
		void nhap_ds(int &n, GV a[]);
		void xuat_ds(int n, GV a[]);
		void tl(int &n, GV a[]);
		void sort_cn(int &n, GV a[]);			
};

void GV::nhap()
{
	cin.ignore();
	cout << "\nNhap ho va ten giao vien : "; cin.getline(ht, 30);
	cout << "Nhap tuoi : "; cin >> t;
	cin.ignore();
	cout << "Nhap bang cap cao nhat duoc dao tao : "; cin.getline(bc, 15);
	cout << "Nhap chuyen nganh : "; cin.getline(cn, 20);
	cout << "Nhap bac luong : "   ; cin >> bl;
	
	lcb = bl * 610;
}

void tieude()
{
	cout << "|      Ho va Ten     |  Tuoi  |    Bang Cap   |    Chuyen Nganh    |  Bac Luong | Luong Co Ban  |" << endl;
}

void GV::xuat()
{
	cout << "|" << setw(20) << ht
		 << "|" << setw(8)  << t
		 << "|" << setw(15) << bc
		 << "|" << setw(20) << cn
		 << "|" << setw(12) << bl
		 << "|" << setw(15) << lcb
		 << "|" << endl;
}

void GV::nhap_ds(int &n, GV a[])
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap giao vien thu " << i + 1;
		a[i].nhap();
	}
}

void GV::xuat_ds(int n, GV a[])
{
	tieude();
	for (int i = 0; i < n; i++)
	{
		a[i].xuat();
	}
}

void GV::tl(int &n, GV a[])
{
	cout << "\nDanh Sach Giao Vien Co Tien Luong Nho Hon 2000 \n ";
	for (int i = 0; i < n; i++)
	{
		if(a[i].lcb < 2000)
		   a[i].xuat();
	}
}

void GV::sort_cn(int &n, GV a[])
{
	cout << "\nDanh Sach Giao Vien Sap Xep Theo Chuyen Nganh \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (strcmp(a[i].cn, a[j].cn) == 1)
			{
				GV tg = a[i];
				 a[i] = a[j];
				 a[j] = tg;
			}
		}
	}
}

int main()
{
	int n;
	cout << "Nhap so giao vien : "; cin >> n;
	while(n < 1)
	{
		cout << "\nVui long nhap lai so luong giao vien ban muon !!!"; cin >> n;
	}
	GV a[n];
	a[n].nhap_ds(n, a);
	a[n].xuat_ds(n, a);
	a[n].tl(n, a);
	a[n].xuat_ds(n, a);
	a[n].sort_cn(n, a);
	a[n].xuat_ds(n, a);
	return 0;
}















