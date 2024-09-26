#include <iostream>
#include <iomanip>
using namespace std;
class HCN
{
	private:
		float d,r, c,s;
	public:
		HCN()
		{
			d=r=0;
		}
		void nhap()
		{
			cout <<"\t\tNhap chieu dai HCN: ";
			cin >> d;
			
			cout <<"\t\tNhap chieu rong HCN: ";
			cin >> r;
			c=tinh_C();
			s=tinh_S();
		}
		float tinh_C()
		{
			return 2*(d+r);
		}
		float tinh_S()
		{
			return d*r;
		}
		void xuat()
		{
			cout <<"|" << setw(12) << d
				 <<"|" << setw(12) << r
				 <<"|" << setw(10) << c
				 <<"|" << setw(12) << s
				 <<"|" << endl
				 <<"+-------------------------------------------------+" << endl;
		}
		void nhap_ds(int n, HCN a[]);
		void xuat_ds(int n, HCN a[]);
		void c_max(int n, HCN a[]);
		void s_min(int n, HCN a[]);
};	
void tittle()
{
	cout <<"+-------------------------------------------------+" << endl
		 <<"|  Chieu dai | Chieu rong |  Chu vi  | Dien tich  |" << endl
		 <<"+-------------------------------------------------+" << endl;
}
void HCN :: nhap_ds(int n, HCN a[])
{
	cout <<"\nNHAP DANH SACH HCN:\n";
	for(int i=0; i<n; i++)
	{
		cout <<"\tNhap thong tin HCN thu: " << i+1 << endl;
		a[i].nhap();
	}
}
void HCN :: xuat_ds(int n, HCN a[])
{
	cout <<"\nXUAT DANH SACH THONG TIN HCN:\n";
	tittle();
	for(int i=0; i<n; i++)
		a[i].xuat();
}
void HCN :: c_max(int n, HCN a[])
{
	cout <<"\nHCN CO CHU VI LON NHAT LA: ";
	int max=a[0].c;
	for (int i=0; i<n; i++)
	{
		if(max < a[i].c)
			max = a[i].c;
	}
	cout << max;
}
void HCN :: s_min(int n, HCN a[])
{
	cout <<"\nHCN CO DIEN TICH NHO NHAT LA: ";
	int min=a[0].s;
	for (int i=0; i<n; i++)
	{
		if(min > a[i].s)
			min = a[i].s;
	}
	cout << min;
}		
int main()
{
	int n;
	cout <<"\nNhap so luong hinh chu nhat: ";
	cin >> n;
	while(n<1)
	{
		cout <<"\n\tNhap lai so luong hinh chu nhat: ";
		cin >> n;
	}
	cout << endl;
	
	HCN a[n];
	a[n].nhap_ds(n,a);
	cout <<"\nXUAT DANH SACH THONG TIN HCN:\n";
	a[n].xuat_ds(n,a);
	a[n].c_max(n,a);
	a[n].s_min(n,a);
	cout << endl;
	return 0;
}