#include <iostream>
using namespace std;

class isp
{
	public:
		virtual void nhap()=0;
		virtual void xuat()=0;
		virtual float traphi()=0;
		friend sum_phi();
};
class dial_up : public isp
{
	private:
		float thuebao_thang=30;
		int sp;
	public:
		dial_up(int sp=0)
		{
			this->sp=sp;
		}
		void nhap()
		{
			cout <<"\tNhap so phut truy cap: ";
			cin >> sp;
		}
		float traphi()
		{
			return thuebao_thang+sp*30;
		}
		void xuat()
		{
			cout <<"\n\tThue bao hang thang la: " << thuebao_thang
				 <<"\n\tSo phut truy cap: " << sp
				 <<"\n\tTien phai tra: " << traphi();
		}
};
class adsl : public isp
{
	private:
		float thuebao_thang=50;
		int dungluong;
	public:
		adsl(int dungluong=0)
		{
			this->dungluong=dungluong;
		}
		void nhap()
		{
			cout <<"\tNhap so dung luong da truy cap: ";
			cin >> dungluong;
		}
		float traphi()
		{
			return thuebao_thang+dungluong*50;
		}
		void xuat()
		{
			cout <<"\n\tThue gbao hang thang la: " << thuebao_thang
				 <<"\n\tSo dung luong da truy cap: " << dungluong
				 <<"\n\tTien phai tra: " << traphi();
		}
};
class t1 : public isp
{
	public:
		void nhap();
		float traphi()
		{
			return 2000;
		}
		void xuat()
		{
			cout <<"\n\tPhi phai tra hang thang cop dinh: " << traphi();
		}
};
void sum_phi(int n, isp *a[])
{
	float sum=0;
	for(int i=0; i<n; i++)
	{
		sum += a[i]->traphi();
	}
	cout <<"\n\nTong phi cuoc cua cac loai thue bao la: " << sum << endl;
}
int main()
{
	int n;
	cout <<"\nNhap so luong thue bao: ";
	cin >> n;
	while(n<1)
	{
		cout <<"\n\tNhap lai so luong thue bao: ";
		cin >> n;
	}
	isp *a[100];
	cout <<"\n\t\t1.Thue bao Dial Up"
		 <<"\n\t\t2.Thue bao ADSL"
		 <<"\n\t\t3.Thue bao T1"
		 <<"\n\t\t4.Stop\n";
		for(int i=0; i<n; i++)
		{
			int chon;
			cout <<"\nChon: ";
			cin >> n;
			if(chon == 1)
				a[i] = new dial_up();
			if(chon == 2)
				a[i] = new adsl();
			if(chon == 3)
				a[i] = new t1();
			if(chon == 4)
				break;
			a[i]->nhap();
		}
		
		for(int i=0; i<n; i++)
		{
			cout <<"\nThong tin thue bao thu: " << i+1;
			a[i]->xuat();
		}
		sum_phi(n,a);
		cout << endl;
		return 0;
}