#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

struct NS{
	int ngay, thang, nam;
};

class KH{
	private:
		char ht[30], cmt[15], k[50];
		NS ns;
	public:
		KH()
		{
			strcmp (ht, " ");
			strcmp(cmt, " ");
			strcmp  (k, " ");
			ns.ngay = ns.thang = ns.nam = 0;
		}
		void nhap();
		void xuat();
		void nhap_ds (int &n, KH a[]);
		void xuat_ds (int n , KH a[]);
		void sort_ten(int &n, KH a[]);
		void sort_ns (int &n, KH a[]);
};

void KH::nhap(){
	cout << "\n Nhap ho ten khach hang : ";
	cin.getline(ht, 30);
	cout << "Nhap ngay, thang, nam sinh \n";
	cout << "Nhap ngay  : "; cin >> ns.ngay;
	cout << "Nhap thang : "; cin >> ns.thang;
	cout << "Nhap nam   : "; cin >> ns.nam;
	
	cin.ignore();
	cout << "Nhap so chung minh thu nhan dan : "; cin.getline(cmt, 15);
	cout << "Nhap ho khau : ";   				  cin.getline(k,   50);
	
}

void tieude(){
	cout << "\n|      Ho va Ten      |    Ngay Sinh    |    So CMTND    |     Ho Khau     |" << endl;	
}

void KH::xuat(){
	 
	 cout << "|" << setw(21) << ht
	 	  << "|" << setw(4) << ns.ngay << "/" << setw(2) << ns.thang << "/" << setw(9) << ns.nam  
	 	  << "|" << setw(16) << cmt
	 	  << "|" << setw(17) << k
	 	  << "|"
	 	  << endl;
}

void KH::nhap_ds(int &n, KH a[])
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n Nhap khach hang thu " << i + 1;
		a[i].nhap();
	}
}

void KH::xuat_ds(int n, KH a[])
{
	tieude();
	for(int i = 0; i < n; i++)
	{
		a[i].xuat();
	}
}

void KH::sort_ten(int &n, KH a[])
{
	cout << "Danh sach khach hang Tang Dan theo Ten ! \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if(strcmp(a[i].ht, a[j].ht) == 1)
			{
				KH tg = a[i];
				 a[i] = a[j];
				 a[j] = tg;
			}
		}
	}
}

void KH::sort_ns(int &n, KH a[])
{
	cout << "\nDanh sach khach hang co thang sinh nhat la 12 : \n";
	tieude();
	for (int i = 0; i < n; i++)
	{
		if(a[i].ns.thang == 12)
		   a[i].xuat(); 
	}
}

int main(){
	int n;
	cout << "Nhap so khach hang : "; cin >> n;
	while(n < 1)
	{
		cout << "\n Vui long nhap lai so luong Khach Hang : "; cin >> n;
	}
	KH a[n];
	cin.ignore();
	a[n].nhap_ds(n, a);
	a[n].xuat_ds(n, a);
	a[n].sort_ten(n, a);
	a[n].xuat_ds(n, a);
	a[n].sort_ns(n, a);
	return 0;
}









