#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

class GV
{
	protected:
		string ten, bc, cn;
		int tuoi;
		float bl;
	public:
		GV()
		{
			ten = bc = cn = " ";
			tuoi = bl = 0;
		}
		
		GV(string ten , int tuoi, string bc , string cn , float bl)
		{
			this -> ten = ten;
			this -> tuoi = tuoi;
			this -> bc = bc;
			this -> cn = cn;
			this -> bl = bl;
		}
		
		friend void nhap(GV&);
		friend void in(GV);
		
		double Ttien()
		{
			return this -> bl * 1490;
		}
};

void nhap(GV &a)
{	
	cout << "Nhap ho va ten : "; getline(cin, a.ten);
	cout << "Nhap tuoi : "; cin >> a.tuoi;
	fflush(stdin);
	cout << "Nhap bang cap : "; getline(cin, a.bc);
	cout << "Nhap chuyen Nganh: "; getline(cin, a.cn);	
}

void in(GV a)
{
	cout << "Ho va ten : "<< a.ten;
	cout << "\nTuoi : " << a.tuoi;
	cout << "\nBang cap : " << a.bc;
	cout << "\nChuyen nganh : " << a.cn << endl;
}
#define a() a
int main()
{
	GV a();
	nhap(a);
	in(a);
	return 0;
}