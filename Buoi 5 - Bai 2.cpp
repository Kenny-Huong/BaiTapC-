#include<iostream>
#include<math.h>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;

class Nguoi{
	protected:
		string ht;
		int ns;
	public:
		Nguoi()
		{
			ht = " ";
			ns = 0;
		}
		
		Nguoi(string ht, int ns)
		{
			this -> ht = ht;
			this -> ns = ns;
		}
		
		~Nguoi()
		{
			;
		}
		
		friend istream& operator >> (istream& is, Nguoi& k)
		{
			fflush(stdin);
			cout << "Nhap ho va ten : "; getline(is, k.ht);
			cout << "Nhap nam sinh : "; is >> k.ns;
		}
		
		friend ostream& operator << (ostream& os, Nguoi& k)
		{
			os << "\nHo ten : " << k.ht;
			os <<"\nNam sinh : " << k.ns;
		}
};

class SV{
	protected:
		string hk;
		float score;
	public:
		SV()
		{
			hk = " ";
			score = 0;
		}
		
		SV(string hk, float score)
		{
			this -> hk = hk;
			this -> score = score;
		}
		
		~SV()
		{
			;
		}
		
		friend istream& operator >> (istream& is, SV& k)
		{
			fflush(stdin);
			cout << "Nhap hanh kiem : "; getline(is, k.hk);
			cout << "Nhap diem : "; is >> k.score;
			
			return is;
		}
		
		friend ostream& operator << (ostream& os, SV& k)
		{
			os << "\nHanh kiem : " << k.hk;
			os << "\nDiem : " << k.score;
			
			return os;
		}	
};

class SVTC : public Nguoi, public SV{
	private:
		int hp;
	public:
		friend istream& operator >> (istream& is, SVTC& k)
		{
			is >> (Nguoi&)k;
			is >> (SV&)k;
			cout << "Nhap tien hoc phi : "; is >> k.hp;
		}
		
		friend ostream& operator << (ostream& os, SVTC& k)
		{
			os << (Nguoi&)k;
			os << (SV&)k;
			os << "\nHoc phi : " << k.hp;
			os << "\nHoc bong : " << k.HocBong();
			os << endl;
		}
		
		float Diem()
		{
			return score;
		}
		
		string HK()
		{
			return hk;
		}
		
		string HocBong()
		{
			if(HK() == "tot"  && Diem() >= 8)
			{
				return "5.000.000";
			}
			else if(HK() == "tot" && Diem() >= 7 || HK() == "kha" && Diem() >= 7)
			{
				return "3.000.000";
			}
			else if(HK() == "tot" && Diem() >= 6 || HK() == "kha" && Diem() >= 6)
			{
				return "2.000.000";
			}
			else
			{
				return "0";
			}
		}
		
};

void nhap_ds(int& n, SVTC a[])
{
	for(int i = 0; i < n; i++)
	{
		cout << "\n** Nhap vao thong tin SVTC thu " << i + 1 << endl;
		cin >> a[i];
	}
}

void xuat_ds(int& n, SVTC a[])
{
	for(int i =0; i < n; i++)
	{
		cout << "\n--> Thong tin SVTC thu " << i + 1 << endl;
		cout << a[i];
	}
}

void find(int& n, SVTC a[])
{
	cout << "\n* Danh Sach Sinh Vien Dat Hoc Bong *" << endl;
	for(int i = 0; i < n; i++)
	{
		if(a[i].HocBong() != "0")
			cout << a[i];
	}
}

void sapxep(SVTC a[], int &n){
	cout<<"\n\t Sap xep theo chieu tang dan cua diem "<<endl;

	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			if(a[i].Diem()>a[j].Diem())
			{
				SVTC tg=a[i];
					 a[i]=a[j];
					 a[j]=tg;
			}
		}
		cout<<a[i];	
	}
}
int main()
{
	int n;
	cout << "Nhap so luong SVTC : "; cin >> n;
	while(n < 1)
	{
		cout << "Moi nhap lai so luong SVTC : "; cin >> n;
	}
	
	SVTC a[n];
	nhap_ds(n, a);
	xuat_ds(n, a);
	find(n, a);
    sapxep(a,n);
 	return 0;
}
