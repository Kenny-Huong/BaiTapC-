#include <iostream>
#include <iomanip>
#include <string>
using namespace std; 

struct cuahang
{
	char  mahang[8];
	char  tenhang[30];
	float dongia;
	int   soluong;
	float thanhtien;
};

void nhap(cuahang a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		cout << "Nhap Ma Hang : ";
		cin.getline(a[i].mahang, 8);
		cout << "Nhap Ten Hang : ";
		cin.getline(a[i].tenhang, 30);
		cout << "Nhap don gia  : ";
		do
		{
			cin >> a[i].dongia;
			
			if (a[i].dongia < 0)
			{
				cout << "Vui long nhap lai don gia : ";
			}
		} while (a[i].dongia < 0);
		cout << "Nhap So Luong : ";
		
		do
		{
			cin >> a[i].soluong;
			
			if (a[i].soluong < 0)
			{
				cout << "Vui long nhap lai so luong : ";	
			}	
		} while (a[i].soluong < 0);
	}
}

void dongke()
{
	cout << "|"
	 	 << setw(15) << "Ma hang "   << "|"
	 	 << setw(15) << "Ten hang"   << "|"
	 	 << setw(15) << "Don Gia "   << "|"
	 	 << setw(15) << "So Luong"   << "|"
	 	 << setw(15) << "Thanh Tien" << "|" << endl;
	
}

void xuat1HangHoa(cuahang a)
{
	cout << "|"
		 << setw(15) << a.mahang    << "|"
		 << setw(15) << a.tenhang   << "|"
		 << setw(15) << a.dongia    << "|"
		 << setw(15) << a.soluong   << "|"
		 << setw(15) << a.thanhtien << "|" << endl;
		 
}

int TongTien(cuahang a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		a[i].thanhtien = a[i].dongia * a[i].soluong;
	}
}

void xuatHangHoa(cuahang a[], int n)
{
	cout << "\nDanh sach Hang Hoa la : " << endl;
	dongke();
	
	for (int i = 0; i < n; i++)
	{
		xuat1HangHoa(a[i]);	
	}
}

void menu(cuahang a[], int n)
{
	int b;
	cout << "----------------Vui Long Lua Chon -----------------"<< endl;
	cout << "1.Nhap danh sach cac hang hoa tu ban phim : " << endl;
	cout << "2.Tinh tong tien : " << endl;
	cout << "3.In danh sach hang hoa duoi dang bang : " << endl;
	cin >> b;
	
	switch (b)
	{
		case 1: 
		cout << "\nNhap danh sach hang hoa : \n";
		nhap(a, n);
		break;
		
		case 2:
		TongTien(a, n);
		cout << "Da Tinh Xong, vui long in danh sach ! ";
		break;
		
		case 3:
		xuatHangHoa(a, n);
		
	}
	cout < "\n\n";
	menu(a, n);
	cout << "\n\n";
	
}

int main()
{
	int n;
	cout << "--------------Nhap So Thiet Bi -------------\n";
	
	do
	{
		cin >> n;
		if(n < 1)
		{
			cout << "Vui long nhap 1 san pham ";
		}
	}while (n < 1);
	
	cuahang hh[180];
	cin.ignore();
	cout << endl;
	menu(hh, n);
	return 0;
}
