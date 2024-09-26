#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class OTO{
	private:
		char mh[15], hsx[15];
		float dongia, dungtich, trongluong;
		double tvc;
	public: 
		OTO(char* mh = " ", char* hsx = " ", float dongia = 0 , float dungtich = 0, float trongluong = 0, double tvc = 0)
		{
			strcpy(mh,mh);
			strcpy(hsx,hsx);
			this -> dongia = dongia;
			this -> dungtich = dungtich;
			this -> trongluong = trongluong;
			this -> tvc = tvc;
		}
		
		~OTO()
		{
			;
		}
		
		friend ostream& operator >> (istream& is, OTO& k)
		{
			fflush(stdin);
			cout << "Nhap ma hang : "; is>>k.mh;
			fflush(stdin);
			cout << "Nhap hang san xuat : "; is>>k.hsx;
			cout << "Nhap don gia : "; is >> k.dongia;
			cout << "Nhap dung tich xilanh : "; is >> k.dungtich;
			cout << "Nhap trong luong : "; is >> k.trongluong;
			
			k.tvc = k.Ttien();
			

		}
		
		double Ttien()
		{
			if(trongluong > 2)
			{
				return 100000;
			}
			else if(trongluong > 1)
			{
				return 50000;
			}
			else 
				return 30000;
		}
		
		bool operator == (float k)
		{
			return this -> trongluong = k;
		}
		
		friend ostream& operator << (ostream &os, OTO& k)
		{
			os << "\n\tMa hang : " << k.mh;
			os << "\n\tTen hang san xuat : " << k.hsx;
			os << "\n\tDon gia : " << k.dongia;
			os << "\n\tDung tich xilanh : " << k.dungtich;
			os << "\n\tTrong luong : " << k.trongluong;
			os << "\n\tTien van chuyen : " << k.tvc;
			
			return os;
		}
		
		
};

void nhap_ds(int &n, OTO a[])
{
	for(int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin Oto thu " << i + 1 << endl;
		cin >> a[i];
	}
}
		
void xuat_ds(int n, OTO a[])
{
	cout << "\n\n\tXuat danh sach oto: "<< endl;

	for(int i=0; i<n; i++)
	    cout << a[i];
}


int main()
{
	int n;
	cout << "So luong Oto can nhap : "; cin >> n;
	while (n < 1)
	{
		cout << "Moi nhap lai so luon Oto : "; cin >> n;
	}
	OTO a[n];
	nhap_ds(n, a);
	xuat_ds(n, a);
}