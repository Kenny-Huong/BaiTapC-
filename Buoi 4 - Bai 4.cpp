#include <iostream>
using namespace std;

class AP{
	protected:
		string ten;
		float giathanh;
	public:
		void nhap()
		{	
			fflush(stdin);
			cout << "Nhap ten an pham : "; getline(cin, ten);
			cout << "Nhap gia thanh : "; cin >> giathanh;
		}
		
		void xuat()
		{
			cout << "\nTen an pham : " << ten;
			cout << "\nGia thanh : " << giathanh;
		}
};

class Sach : public AP{
	private:
		int sotrang;
	public:
		void nhap()
		{
			AP :: nhap();
			cout << "Nhap so trang : "; cin >> sotrang;
		}
		
		void xuat()
		{
			AP :: xuat();
			cout << "\nSo trang : " << sotrang;
		}
		
		int getSotrang()
		{
			return sotrang;
		}
};

class CD : public AP{
	private:
		float sophut;
	public:
		void nhap()
		{
			AP :: nhap();
			cout << "Nhap so phut : "; cin >> sophut;
		}
		
		void xuat()
		{
			AP :: xuat();
			cout << "\nSo phut : " << sophut;
		}
};

void nhap_ds_sach(int &n, Sach a[])
{
	for(int i = 0; i < n; i++)
	{
		cout << "\n*Nhap thong tin quyen sach thu " << i + 1 << endl;
		a[i].nhap();
	}
}

void xuat_ds_sach(int n, Sach a[])
{
	for(int i = 0; i < n; i++)
	{
		cout << "Thong tin quyen sach thu " << i + 1 << endl;
	    a[i].xuat();
	}
}

void showSach(int n, Sach a[])
{
	cout << "\n-> Nhung quyen sach co so trang >500 " << endl;
	for(int i = 0; i < n; i++)
	{
		if(a[i].getSotrang() > 500)
			a[i].xuat();
	}
}
void nhap_ds_cd(int& n, CD a[])
{
	for(int i = 0; i < n; i++)
	{
		cout << "\n*Nhap thong tin dia CD thu " << i + 1 << endl;
		a[i].nhap();
	}
}

void xuat_ds_cd(int n, CD a[])
{
	for (int i = 0; i < n; i ++)
	{
		cout << "\n->Thong tin dia CD thu " << i + 1 << endl;
		a[i].xuat();
	}
}

int main()
{
	int n, m;
	cout << "Nhap so luong sach : " ; cin >> n;
	while(n < 1)
	{
		cout << "Moi nhap lai so luong sach : "; cin >> n;
	}
	Sach a[n];
	nhap_ds_sach(n, a);
	xuat_ds_sach(n, a);
	showSach(n, a);
	
	return 0;
}