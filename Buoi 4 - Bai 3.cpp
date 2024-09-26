#include <iostream>
using namespace std;

class MH{
	protected:
		string ma, ten;
		double dongia;
	
	public:
		MH()
		{
			ma = ten = " ";
			dongia = 0;
		}
		
		MH(string ma, string ten, double)
		{
			this -> ma = ma;
			this -> ten = ten;
			this -> dongia = dongia;
		}
		 
		~MH()
		{
			;
		}
		
		friend istream& operator >> (istream& is, MH& k)
		{
			fflush(stdin);
			cout << "Nhap ma hang : ";	getline(is, k.ma);
			cout << "Nhap ten hang : "; getline(is, k.ten);
			cout << "Nhap don gia : "; is >> k.dongia;
			
			return is;
		}
		
		string getMa()
		{
			return ma;
		}
		
		double getdongia()
		{
			return dongia;
		}
};

class BK : public MH{
	private:
		string noisx;
	
	public:
		BK() : MH()
		{
			noisx = " ";
		}
		
		BK(string noisx) : MH(MH())
		{
			this -> noisx = noisx;
		}
		
		double chietkhau()
		{
			return (dongia*10)/100;
		}
		
		friend istream& operator >> (istream& is, BK& k)
		{
			is >> (MH&)k;
			fflush(stdin);
			cout << "Nhap noi san xuat : "; getline(is, k.noisx);
			
			return is;
		}
		
		friend ostream& operator << (ostream& os, BK& k)
		{
		
			os << "\nMa hang : " << k.ma;
			os << "\nTen hang : " << k.ten;
			os << "\nDon gia : " << k.dongia;
			os << "\nNoi san xuat : " << k.noisx;
			os << "\nChiet khau : " << k.chietkhau();
			os << endl;
			
			return os;
		}
};


void nhap_ds(int &n, BK a[])
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap thong tin banh keo thu : " << i + 1 << endl;
		cin >> a[i];
	}
}

void xuat_ds(int n, BK a[])
{
	for (int i = 0; i < n;i ++)
	{
		cout << a[i];
	}
}

void show(int n, BK a[])
{
	cout <<"\nMat hang co ma khac M01:\n";
	for(int i = 0; i < n; i++)
	{
		if(a[i].getMa() != "M01")
			cout << a[i];
	}
}

int main()
{
	int n;
	cout << "So luong banh keo can nhap thong tin : "; cin >> n;
	while(n < 1)
	{
		cout << "Vui long nhap lai so luong banh keo : "; cin >> n;
	}
	
	BK a[n];
	nhap_ds(n, a);
	xuat_ds(n, a);
	show(n, a);
	
	return 0;
}