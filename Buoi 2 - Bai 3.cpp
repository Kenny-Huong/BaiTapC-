#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class TS
{
	private:
		string hoten;
		float toan,van;
	public:
		TS(string hoten=" ", float toan=0, float van=0)
		{
			this->hoten=hoten;
			this->toan=toan;
			this->van=van;
		}
		~TS()
		{
			;
		}
		void nhap()
		{
			fflush(stdin);
			cout <<"\t\tNhap ho ten: ";
			getline(cin, hoten);
			
			cout <<"\t\tNhap diem toan: ";
			cin >> toan;
			
			cout <<"\t\tNhap diem van: ";
			cin >> van;
		}
		void xuat()
		{
			cout <<"|" << setw(20) << hoten
				 <<"|" << setw(12) << toan
				 <<"|" << setw(10) << van
				 <<"|" << endl
				 <<"+--------------------------------------------+" << endl;
		}
		void nhap_ds(int &n, TS a[]);
		void xuat_ds(int n, TS a[]);
		void find(int &n, TS a[]);
		void sort(int &n, TS a[]);
};
tittle()
{
	cout <<"+--------------------------------------------+" << endl
		 <<"|       Ho ten       | Diem toan  | Diem van |" << endl
		 <<"+--------------------------------------------+" << endl;
}
void TS :: nhap_ds(int &n, TS a[])
{
	cout <<"\nNHAP DANH SACH THI SINH:\n";
	for(int i=0; i<n; i++)
	{
		cout <<"\tNhap thong tin thi sinh thu: " << i+1 << endl;
		a[i].nhap();
	}
}
void TS :: xuat_ds(int n, TS a[])
{
	tittle();
	for(int i=0; i<n; i++)
		a[i].xuat();
}
void TS :: find(int &n, TS a[])
{
	string f;
	fflush(stdin);
	cout <<"\n\tNhap ten thi sinh can tim kiem: ";
	getline(cin, f);
		
	bool check=false;
	for(int i=0; i<n; i++)
	{
		if(f == a[i].hoten)
		{
			cout <<"\n\t\tCo thi sinh can tim.\nThong tin thi sinh la:\n";
			tittle();
			a[i].xuat();
			check=true;
			
			n--;
			for(int k=i; k<n; k++)
				a[k] = a[k+1];
				
			cout <<"\nDANH SACH THI SINH SAU KHI XOA THI SINH DA TIM:\n";
			tittle();
			for(int i=0; i<n; i++)
				a[i].xuat();
		}
	}
	if(!check)
		cout <<"\tKhong co thi sinh can tim kiem trong danh sach.\n";
}
void TS :: sort(int &n, TS a[])
{	cout <<"\nDANH SACH THI SINH SAU KHI XOA THEO THU TU TANG DAN CUA HO TEN:\n";
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[i].hoten > a[j].hoten)
			{
				TS tg= a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
}
	
int main()
{
	int n;
	cout <<"\nNhap so luong thi sinh: ";
	cin >> n;
	while(n<1)
	{
		cout <<"\n\tNhap lai so luong thi sinh: ";
		cin >> n;
	}
	cout << endl;
	
	TS a[n];
	a[n].nhap_ds(n,a);
	cout <<"\nXUAT DANH SACH THI SINH:\n";
	a[n].xuat_ds(n,a);
	a[n].find(n,a);
	a[n].sort(n,a);
	a[n].xuat_ds(n,a);
	cout << endl;
	return 0;
}