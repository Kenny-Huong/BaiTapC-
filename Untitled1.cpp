#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct DH {
	int dt, dl, dh;
};
class SV
{
	private:
		char ht[30];
		DH dh;
	public:
		SV()
		{
			dh.dt = dh.dl = dh.dh = 0;
		}
		void nhap();
		void xuat();
		void nhap_ds(int n, SV a[]);
		void xuat_ds(int n, SV a[]);
		
};
void SV::nhap()
{
	cout<<"\nNhap ho va ten sinh vien: ";
	cin.getline(ht,30);
	cout<<"Diem toan cua sinh vien: ";
	cin>>dh.dt;
	cout<<"Diem li cua sinh vien: ";
	cin>>dh.dl;
	cout<<"Diem hoa cua sinh vien: ";
	cin>>dh.dh;
}
void tieude()
{
	cout<<"+------------------+---------------+-----------+------------+\n"
	    <<"|     Ho va ten    |   Diem toan   |  Diem li  |  Diem hoa  |\n"
	    <<"+------------------+---------------+-----------+------------+";
}
void SV::xuat()
{
	cout<<"\n"<<"|"<<setw(18)<<ht
		<<"|"<<setw(15)<<dh.dt
		<<"|"<<setw(11)<<dh.dl
		<<"|"<<setw(12)<<dh.dh
		<<"|"<<endl
		<<"+------------------+---------------+-----------+------------+";
}
void SV::nhap_ds(int n, SV a[])
{
		for(int i=0; i<n; i++)
		{
			cout<<"Nhap sinh vien thu: "<<i+1;
			a[i].nhap();
		}
}
void SV::xuat_ds(int n, SV a[])
{
	tieude();
	for(int i=0; i<n; i++)
	{
		a[i].xuat();
	}
}
int main()
{
	int n;
	cout<<"So sinh vien muon nhap diem: ";
	cin>>n;
	cin.ignore();
	SV a[n];
	a[n].nhap_ds(n,a);
	a[n].xuat_ds(n,a);
}
