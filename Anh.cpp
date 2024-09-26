#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

struct Date
{
	int ngay, thang, nam;
	Date()
	{
		ngay = thang = nam = 0;
	}
};

class DP
{
	char masp[20], tensp[20];
	float dongia;
	public:
		DP(char* masp = " ", char* tensp = " ", float dongia = 0)
		{
			strcpy(masp, masp);
			strcpy(tensp, tensp);
			this->dongia = dongia;
		}	
		~DP()
		{
			;
		}
		
		void nhap()
		{
			fflush(stdin);
			cout << "Nhap ma san pham : "; cin.getline(masp, 20);
			cout << "Nhap ten san pham : "; cin.getline(tensp, 20);
			cout << "Nhap ten don gia : "; cin >> dongia;
		}
		
		void xuat()
		{
			cout << "\nMa san pham : " << masp;
			cout << "\nTen san pham : " << tensp;
			cout << "\nDon gia : " << dongia << endl;
		}
};

class Thuoc : public DP
{
	char loaithuoc[20], tpthuoc[20];
	Date time;
	public:
		Thuoc(char* loaithuoc = " ", char* tpthuoc = " ", Date time = Date())
		{
			strcpy(loaithuoc, loaithuoc);
			strcpy(tpthuoc, tpthuoc);
			this ->time = time;
		}
		~Thuoc()
		{
			;
		}
		
		friend istream& operator >> (istream& is, Thuoc& k)
		{
			k.DP :: nhap();
			fflush(stdin);
			cout << "Nhap loai thuoc thuoc : "; is >> k.loaithuoc;
			cout << "\nNhap han su dung \n";
			cout << "\t Nhap ngay : "; is >> k.time.ngay;
			cout << "\t Nhap thang : "; is >> k.time.thang;
			cout << "\t Nhap nam : "; is >> k.time.nam;
			cout << "\nNhap thanh pham thuoc : "; is >> k.tpthuoc;
			
			return is;
		}
		
		friend ostream& operator << (ostream& os, Thuoc& k)
		{
			k.DP :: xuat();
			os << "Loai thuoc : " << k.loaithuoc;
			os << "\nHan su dung : " << k.time.ngay << "/" << k.time.thang 
								   << k.time.nam;
  			os << "\nThanh pham thuoc : " << k.tpthuoc << endl;
  			
  			return os;
		}
};

void nhap_ds_dp(int& n, DP a[])
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vao duoc pham thu " << i + 1 << endl;
		a[i].nhap();
	}
}

void xuat_ds_dp(int n, DP a[])
{
	for (int i = 0; i < n; i++)
	{
		a[i].xuat();
	}
}

void nhap_ds_thuoc(int& n, Thuoc a[])
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vao loai thuoc thu " << i + 1 << endl;
		cin >> a[i];
	}
}

void xuat_ds_thuoc(int n, Thuoc a[])
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
}

int main()
{
	int n; 
	cout << "\nNhap so luong duoc pham : "; cin >> n;
	while(n < 1)
	{
		cout << "Moi nhap lai sp luong duoc pham : "; cin >> n;
	}
	DP a[n];
	nhap_ds_dp(n, a);
	cout << "\n\t\t Danh sach duoc pham vua nhap \n";
	xuat_ds_dp(n, a);
	
	int m;
	cout << "\nNhap so luong thuoc : "; cin >> m;
	while(m < 1)
	{
		cout << "Moi nhap lai so thuoc : "; cin >> m;
	}
	Thuoc b[m];
	nhap_ds_thuoc(m, b);
	cout << "\n\t\tDanh sach thuoc da nhap \n ";
	xuat_ds_thuoc(m, b);
	
	
}
