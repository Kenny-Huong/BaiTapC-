#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class NGUOI
{
	private: 
		string hoten, nghenghiep, quoctich;
		int tuoi;
	public:
		NGUOI(string hoten=" ", int tuoi=0, string nghenghiep=" ", string quoctich=" ")
		{
			this->hoten=hoten;
			this->tuoi=tuoi;
			this->nghenghiep=nghenghiep;
			this->quoctich=quoctich;
		}
		~NGUOI()
		{
			;
		}
		void nhap()
		{
			fflush(stdin);
			cout <<"\t\tNhap ho ten: ";
			getline(cin, hoten);
			
			cout <<"\t\tNhap tuoi: ";
			cin >> tuoi;
			
			fflush(stdin);
			cout <<"\t\tNhap nghe nghiep: ";
			getline(cin, nghenghiep);
			
			cout <<"\t\tNhap quoc tich: ";
			getline(cin, quoctich);
		}
		void xuat()
		{
			cout <<"|" << setw(20) << hoten
				 <<"|" << setw(6) << tuoi
				 <<"|" << setw(20) << nghenghiep
				 <<"|" << setw(12) << quoctich
				 <<"|" << endl
				 <<"+-------------------------------------------------------------+" << endl;
		}
		void nhap_ds(int &n, NGUOI a[]);
		void xuat_ds(int n, NGUOI a[]);
		void sort(int &n, NGUOI a[]);
		void doctor(int n, NGUOI a[]);
		void Campuchia(int n, NGUOI a[]);
		void find_person(int n, NGUOI a[]);
		void max_tuoi(int n, NGUOI a[]);
		void min_tuoi(int n, NGUOI a[]);
};
void tittle()
{
	cout <<"+-------------------------------------------------------------+" << endl
		 <<"|       Ho ten       | Tuoi |    Nghe nghiep     | Quoc tich  |" << endl
		 <<"+-------------------------------------------------------------+" << endl;
}
void NGUOI :: nhap_ds(int &n, NGUOI a[])
{
	cout <<"\nNHAP DANH SACH NGUOI:\n";
	for(int i=0; i<n; i++)
	{
		cout <<"\n\tNhap thong tin nguoi thu: " << endl;
		a[i].nhap();
	}
}
void NGUOI :: xuat_ds(int n, NGUOI a[])
{
	tittle();
	for(int i=0; i<n; i++)
		a[i].xuat();
}
void NGUOI :: sort(int &n, NGUOI a[])
{
	cout <<"\nDANH SACH TANG DAN THEO TEN:\n";
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[i].hoten > a[j].hoten)
			{
				NGUOI tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
}
void NGUOI :: doctor(int n, NGUOI a[])
{
	bool check=false;
	for(int i=0; i<n; i++)
	{
		if(a[i].nghenghiep == "Bac si")
		{
			cout <<"\nDANH SACH NGUOI CO NGHE NGHIEP LA BAC SI:\n";
			tittle();
			a[i].xuat();
			check=true;
		}
	}
	if(!check)
		cout <<"\nKhong co ai làm nghe bac si trong danh sach.\n";
}
void NGUOI :: Campuchia(int n, NGUOI a[])
{	
	bool check=false;
	for(int i=0; i<n; i++)
	{
		if(a[i].quoctich == "Campuchia")
		{
			cout <<"\n\nCo nguoi co quoc tich Camphuchia trong danh sach.\n\t->Thuc hien yeu cau xoa nguoi nay.\n";
			check=true;
			
			
			for(int k=i; k<n; k++)
				a[k] = a[k+1];	
			n--;
		}
	}
				
	if(!check)
		cout <<"\n\nKhong co nguoi nao co quoc tich Campuchia trong danh sach.\n";
	
	else
	{
		cout <<"\nDANH SACH SAU KHI XOA NGUOI CAMPUCHIA:\n";
		tittle();
		for(int i=0; i<n; i++)
			a[i].xuat();
    }
}
void NGUOI :: find_person(int n, NGUOI a[])
{
	bool check=false;
	for(int i=0; i<n; i++)
	{
		if(a[i].hoten == "Le Dai Nghia")
		{
			cout <<"\n\nCo Le Dai Nghia trong danh sach.\n";
			tittle();
			a[i].xuat();
			check=true;
		}
	}
	if(!check)
		cout <<"\n\nKhong co Le Dai Nghia trong danh sach.\n\t->Chen them LE DAI NGHIA:\n";
}
void NGUOI :: max_tuoi(int n, NGUOI a[])
{
	cout <<"\nNGUOI CO TUOI LON NHAT LA:\n";
	tittle();
	int max=a[0].tuoi;
	for(int i=0; i<n; i++)
	{
		if(max < a[i].tuoi)
			max = a[i].tuoi;
	}
	cout << max;
}
void NGUOI :: min_tuoi(int n, NGUOI a[])
{
	cout <<"\nNGUOI CO TUOI NHO NHAT LA:\n";
	tittle();
	int min=a[0].tuoi;
	for(int i=0; i<n; i++)
	{
		if(min > a[i].tuoi)
			min = a[i].tuoi;
	}
	cout << min;
}
int main()
{
	int n;
	cout <<"\nNhap so luong nguoi: ";
	cin >> n;
	while(n<1)
	{
		cout <<"\n\tNhap lai so luong nguoi: ";
		cin >> n;
	}
	cout << endl;
	
	NGUOI a[n];
	a[n].nhap_ds(n,a);
	cout <<"\nXUAT DANH SACH NGUOI:\n";
	a[n].xuat_ds(n,a);
	a[n].sort(n,a);
	a[n].xuat_ds(n,a);
	a[n].doctor(n,a);
	a[n].Campuchia(n,a);
	a[n].find_person(n,a);
	a[n].max_tuoi(n,a);
	a[n].min_tuoi(n,a);
	cout << endl;
	return 0;
}