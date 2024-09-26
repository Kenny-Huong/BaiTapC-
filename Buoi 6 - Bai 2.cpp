#include <iostream>
#include <string>
using namespace std;

class Nguoi
{
	protected:
		string hoten;
	public:
		virtual void nhap()
		{
			fflush(stdin);
			cout <<"Nhap ho ten: "; getline(cin, hoten);
		}
		
		virtual void xuat()
		{
			cout <<"\nHo ten: " << hoten << endl;
		}	
		
		virtual int thuong() = 0;
};
class SV : public Nguoi
{
	private:
		float diemthi;
	public:
		void nhap()
		{
			Nguoi :: nhap();
			cout <<"Nhap diem thi: "; cin >> diemthi;
		}
		
		void xuat()
		{
			Nguoi :: xuat();
			cout <<"Diem thi: " << diemthi << endl;
		}
		
		int thuong()
		{
			return (diemthi > 8 ? 1 : 0);
		}
};
class GV : public Nguoi
{
	private:
		int sobaibao;
	public:
		void nhap()
		{
			Nguoi :: nhap();
			cout <<"Nhap so bai bao: "; cin >> sobaibao;
		}
		void xuat()
		{
			Nguoi :: xuat();
			cout <<"So bai bao la: " << sobaibao << endl;
		}
		int thuong()
		{
			return (sobaibao > 5 ? 1 : 0);
		}
};
int main()
{
	Nguoi *a[100];
	int chon, n = 0, i;
	cout <<"\n1.Giao vien \n2.Sinh vien \n3.STop\n";
	while(1)
	{
		cout <<"\nChon: ";
		cin >> chon;
		if(chon == 1)
			a[n] = new GV();
		if(chon == 2)
			a[n] = new SV();
		if(chon == 3)
			break;
		a[n] -> nhap();
		n++;
	}
	
	cout << "\n* Danh Sach Da Nhap *" << endl;
	for(int i = 0; i < n; i ++)
	{
		a[i] -> xuat();
	}
	
	cout <<"\n-> Danh Sach Doi Tuong Duoc Tuong <-\nSV(diem thi > 8) | GV (baibao >  5)" << endl;
	for(int i = 0; i < n; i++)
	{
		if (a[i] -> thuong())
			a[i] -> xuat();
	}
	cout << endl;
	return 0;
}