#include<iostream>
#include<math.h>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;

class SD{
	protected:
		string msv, ht, sex;
	public:
		SD()
		{
			msv = ht = sex = " ";
		}
		
		SD(string msv, string ht, string sex)
		{
			this -> msv = msv;
			this -> ht = ht;
			this -> sex = sex;
		}
		
		~SD(){
		}
		
		friend istream& operator >> (istream& is, SD& k)
		{
			fflush(stdin);
			cout << "Nhap ma sinh vien : "; getline(is, k.msv);
			cout << "Nhap ho va ten : "; getline(is, k.ht);
			cout << "Nhap gioi tinh : "; getline(is, k.sex);
			
			return is;
		}
		
		friend ostream& operator << (ostream& os, SD& k)
		{
			os << "MSV : " << k.msv;
			os << "\nHo Ten : " << k.ht;
			os << "\nGioi Tinh : " << k.sex;
			
			return os;
		}
};


class MH{
	protected:
		string mamon, tenmon;
	public:
		mh()
		{
			mamon = tenmon = " ";	
		}	
		
		mh(string mamon, string tenmon)
		{
			this -> mamon = mamon;
			this -> tenmon = tenmon;
		}
		
		friend istream& operator >> (istream& is, MH& k)
		{
			fflush(stdin);
			cout << "Nhap ma mon : "; getline(is, k.mamon);
			cout << "Nhap ten mon : "; getline(is, k.tenmon);
			
			return is;
		}
		
		friend ostream& operator << (ostream& os, MH& k)
		{
			os << "\nMa mon : " << k.mamon;
			os << "\nTen mon : " << k.tenmon;
		}
 };
 
 class DiemMH : public SD, public MH{
 	private:
 		float score;
 	public:
 		DiemMH()
 		{
 			score = 0;	
		}
		DiemMH(string msv, string ht, string sex, string mamon, string tenmon)
		{
			this -> score = score;
		}
		
		friend istream& operator >> (istream& is, DiemMH& k)
		{
			is >> (SD&)k;
			is >> (MH&)k;
			cout << "Nhap diem thi : "; is >> k.score;
			
			return is;
		}
		
		friend ostream& operator << (ostream& os, DiemMH& k)
		{
			os << (SD&)k;
			os << (MH&)k;
			os << "\nDiem thi : " << k.score;
			os << endl;
			
			return os;
		}
		
		string SEX()
		{
			return sex;
		}
		
		float Diem()
		{
			return score;
		}
 };
 
 void nhap_ds(int& n, DiemMH a[])
 {
 	for (int i = 0; i < n; i++)
 	{
 		cout << "\nNhap vao thong tin doi tuong thu " << i + 1 << endl;
		cin >> a[i];	
	}
 }
 
 void xuat_ds(int& n, DiemMH a[])
 {
 	for (int i = 0; i < n; i++)
 	{
 		cout << "\n--> Thong tin doi tuong thu " << i + 1 << endl;
		 cout << a[i];		
	}
 }
 
 void show_nam(int& n, DiemMH a[])
 {
 	cout << "\n\t< Danh sach SV gioi tinh 'Nam' >\n";
 	for(int i =0; i < n; i++)
 	{
 		if(a[i].SEX() == "nam")
		{
			cout << a[i]; 	
		}	
	}
 }
 
 void swap(DiemMH a[], int& n)
 {
 	cout << "\n\tSap Xep theo chieu giam dan cua Diem Thi \n";
	for(int i = 0; i < n; i++)
	{
		for(int j = 1; j < n; j++)
		{
			if(a[i].Diem() < a[j].Diem())
			{
				DiemMH tg = a[i];
					 a[i] = a[j];
					 a[j] = tg;
			}
		}
		cout << a[i];	
	}
 }
 
int main()
{	
	int n;
	cout << "Nhap danh sach doi tuong : "; cin >>n;
	while(n < 1)
	{
		cout << "[warning] Moi nhap lai danh sach doi tuong : "; cin >> n;
	}
	
	DiemMH a[n];
	nhap_ds(n, a);
	xuat_ds(n, a);
	show_nam(n, a);
	swap(a, n);
 	return 0;
}
