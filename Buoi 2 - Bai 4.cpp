#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class SV
{
	private:
		int sbd;
		string hoten;
		float toan, li, hoa, tongdiem;
	public:
		SV(int sbd=0, string hoten=" ", float toan=0, float li=0, float hoa=0, float tongdiem=0)
		{
			this->sbd=sbd;
			this->hoten=hoten;
			this->toan=toan;
			this->li=li;
			this->hoa=hoa;
			this->tongdiem=tongdiem;
		}
		~SV()
		{
			;
		}
		void nhap()
		{
			cout <<"\t\tNhap so bao danh: ";
			cin >> sbd;
			
			fflush(stdin);
			cout <<"\t\tNhap ho ten: ";
			getline(cin, hoten);
			
			cout <<"\t\tNhap diem toan: ";
			cin >> toan;
			
			cout <<"\t\tNhap diem li: ";
			cin >> li;
			
			cout <<"\t\tNhap diem hoa: ";
			cin >> hoa;
			
			tongdiem = toan+li+hoa;
		}
		void xuat()
		{
			cout <<"|" << setw(10) << sbd
				 <<"|" << setw(20) << hoten
				 <<"|" << setw(6) << toan
				 <<"|" << setw(6) << li
				 <<"|" << setw(6) << hoa
				 <<"|" << setw(6) << tongdiem
				 <<"|" << endl
				 <<"+-----------------------------------------------------------+" << endl;
		}
		void nhap_ds(int n, SV a[]);
		void xuat_ds(int n, SV a[]);
		void trungtuyen(int n, SV a[]);
		void thukhoa(int n, SV a[]);
};
void tittle()
{
	cout <<"+-----------------------------------------------------------+" << endl
		 <<"|    SBD   |       Ho ten       | Toan |  Li  |  Hoa | Tong |" << endl
		 <<"+-----------------------------------------------------------+" << endl;
}
void SV :: nhap_ds(int n, SV a[])
{
	cout <<"\nNHAP DANH SACH THONG TIn SINH VIEN:\n";
	for(int i=0; i<n; i++)
	{
		cout <<"\tNhap thong tin sinh vien thu: " << i+1 << endl;
		a[i].nhap();
	}
}
void SV :: xuat_ds(int n, SV a[])
{
	tittle();
	for(int i=0; i<n; i++)
		a[i].xuat();
}
void SV :: trungtuyen(int n, SV a[])
{
	cout <<"\nDANH SACH SINH VIEN TRUNG TUYEN LA:\n";
	tittle();
	for(int i=0; i<n; i++)
	{
		if(a[i].tongdiem >= 20)
			a[i].xuat();
	}
}
void SV :: thukhoa(int n, SV a[])
{
	cout <<"\nSINH VIEN THU KHOA LA:\n";
	tittle();
	int max = a[0].tongdiem;
	for(int i=0; i<n; i++)
	{
		if( max < a[i].tongdiem)
			max = a[i].tongdiem;
	}
	cout << max;
}
int main()
{
	int n;
	cout <<"\nNhap so luong sinh vien: ";
	cin >> n;
	while(n<1)
	{
		cout <<"\tNhap lai so luong sinh vien: ";
		cin >> n;
	}
	cout << endl;
	
	SV a[n];
	a[n].nhap_ds(n,a);
	cout <<"\nXUAT DANH SACH SINH VIEN:\n";
	a[n].xuat_ds(n,a);
	a[n].trungtuyen(n,a);
	a[n].thukhoa(n,a);
	cout << endl;
	return 0;
	
}