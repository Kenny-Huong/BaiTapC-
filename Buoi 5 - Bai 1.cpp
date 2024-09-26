#include<iostream>
#include<math.h>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;

class mh{
	protected:
		string mon;
		int tiet;
	public:
		mh()
		{
			mon = " ";
			tiet = 0;
		}
		
		mh(string mon, int tiet)
		{
			this -> mon = mon;
			this -> tiet = tiet;
		}
		
		~mh()
		{
			;
		}
		
		void nhap()
		{
			fflush(stdin);
			cout << "Nhap ten mon hoc : "; getline(cin, mon);
			cout << "Nhap so tiet : "; cin >> tiet;
		}
		
		void xuat()
		{
			cout << "\nMon : " << mon;
			cout << "\nSo tiet : " << tiet;
		}
};

class nguoi{
	protected:
		string hoten;
		int ns;
	public:
		nguoi()
		{
			hoten = " ";
			ns = 0;
		}
		
		nguoi(string hoten, int ns)
		{
			this -> hoten = hoten;
			this -> ns = ns;
		}
		
		~nguoi()
		{
			;
		}
		
		void nhap_n()
		{
			fflush(stdin);
			cout << "Nhap ho va ten : "; getline(cin, hoten);
			cout << "Nhap nam sinh : "; cin >> ns;
		}
		
		void xuat_n()
		{
			cout << "\nHo va ten : " << hoten;
			cout << "\nNam sinh : " << ns;
		}
		
};

class gv : public nguoi, mh{
	private:
		string bomon;
	public:
		gv()
		{
			bomon = " ";
		}
		
		gv(string mon, int tiet, string hoten, int ns, string bomon)		
		{
			this -> bomon = bomon;
		}
		
		~gv()
		{
			;
		}
		
		void nhap_gv()
		{
			nguoi :: nhap_n();
			mh :: nhap();
			fflush(stdin);
			cout << "Nhap bo mon : "; getline(cin, bomon);
		}
		
		void xuat_gv()
		{
			nguoi :: xuat_n();
			mh :: xuat();
			cout << "\nBo mon : " << bomon; 
		}
};

int main()
{
	gv a;
	a.nhap_gv();
	a.xuat_gv();
 	return 0;
}
