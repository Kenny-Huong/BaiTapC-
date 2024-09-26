#include <iostream>
#include <iomanip>
#include <string> 
using namespace std;

struct HocSinh
{
	char mahs[7];
	char tenhs[30];
	char quequan[30];
	float tongdiem;
};

void nhap(HocSinh a[], int n)
{
	for (int i = 0; i < n; i++)
	{ 
		cin.ignore();
		cout << "Nhap ma so : "    ; cin.getline(a[i].mahs, 7);
		cout << "Nhap ho va ten : "; cin.getline(a[i].tenhs, 30);
		cout << "Nhap que quan : " ; cin.getline(a[i].quequan, 30);
		cout << "Nhap tong diem : "; cin >> a[i].tongdiem;
	}
}

void dongke()
{
	cout << "|"
		 << setw(15) << "Ma hoc sinh"  << "|"
		 << setw(15) << "Ten hoc sinh" << "|"
		 << setw(15) << "Que quan"     << "|"
		 << setw(15) << "Tong diem"    << "|"
		 << endl;
}

void xuat1hocsinh(HocSinh a)
{
	cout << "|"
		 << setw(15) << a.mahs    << "|"
		 << setw(15) << a.tenhs   << "|"
		 << setw(15) << a.quequan << "|"
		 << setw(15) << a.tongdiem<< "|"
		 << endl;
}

void xuaths(HocSinh a[], int n)
{
	cout << "\nDanh sach hoc sinh la : " << endl;
	dongke();
	for (int i = 0; i < n; i++)
	{
		xuat1hocsinh(a[i]);
	}	
}

void xuatqueNamDinh(HocSinh a[], int n)
{
	cout << "\nDanh sach hoc sinh que Nam Dinh : ";
	dongke();
	for(int i = 0; i < n; i++)
	{
		if(a[i].quequan == "Nam Dinh")
		{
			xuat1hocsinh(a[i]);
		}
	}
}

void sapxep(HocSinh a[], int n)
{
	for (int i = 0; i < n; i++)
	for (int j = i + 1; j < n; j++)
	if  (a[i].tongdiem < a[j].tongdiem)
	{
		HocSinh tg = a[i];
			  a[i] = a[j];
			  a[j] = tg;
	}
}

void menu(HocSinh a[], int n)
{
	int b;
	cout << "--------Vui long lua chon --------" << endl;
	cout << "1.Nhap danh sach cac hoc sinh " << endl;
	cout << "2.In danh sach hoc sinh duoi dang bang " << endl;
	cout << "3.In danh sach hoc sinh que Nam Dinh " << endl;
	cout << "4.Sap xep danh sach giam dan " << endl;
	
	cout << "Lua chon cua ban la : "; cin >> b;
	
	switch(b)
	{
		case 1:
			cout << "\nNhap danh sach hoc sinh : \n\n";
			nhap(a, n);
			break;
		case 2:
			xuaths(a, n);
			break;
		case 3:
			xuatqueNamDinh(a, n);
			break;
		case 4:
			cout << "\nSap xep tong diem thu tu giam dan : ";
			sapxep(a, n);
			xuaths(a, n);
			break;
	}
	cout << "\n\n";
	menu(a, n);
	cout << "\n\n";
	
}

int main()
{
	int n;
		cout << " Nhap so hoc sinh : ";
	do
	{
		cin >> n;
		if(n < 1)
		{
			cout << "Vui long nhap it nhat 1 san pham";
		}
	}
	while(n < 1);
	
	HocSinh hs[100];
	cin.ignore();
	cout << endl;
	menu(hs, n);
	return 0;
}
