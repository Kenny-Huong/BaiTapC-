#include <iostream>
#include <math.h>
using namespace std;


 class PS
 {
 	private:
 		int t, m;
 	public:
 		PS(int t = 1, int m = 1)
 		{
 			this -> t = t;
			this -> m = m;	
		}
		~PS()
		{
			;
		}
		void nhap();
		void xuat();
		void tong(PS x, PS y);
		void hieu(PS x, PS y);
		void tich(PS x, PS y);
		void thuong(PS x, PS y);
 };
 
 void PS::nhap()
 {
 	cout << "\nNhap phan tu : "; cin >> t;
 	cout << "Nhap Phan mau  : "; cin >> m;
 	while (m == 0)
 	{
 		cout << "Vui Long Nhap Lai Phan Mau ( Mau =! 0 ) : "; cin >> m;	
	}
 }
 
 void PS::xuat()
 {
 	cout << "\nPhan So Co Dang : " << t << " / " << m << endl;
 }
 
 void PS::tong(PS x, PS y)
 {
 	PS tmp;
 	int tu, mau;
 	tu  = x.t * y.m + y.t*x.m;
 	mau = x.m * y.m;
	 
	tmp.t  = tu, tmp.m = mau;
	cout << "\n Tong Cua 2 Phan So La : " << x.t <<"/"<< x.m <<" + "<< y.t <<"/"<< y.m <<" = "<< tmp.t <<"/"<< tmp.m << endl;
 }
 
 void PS::hieu(PS x, PS y)
 {
 	PS tmp;
 	int tu, mau;
 	tu  = x.t*y.m - y.t*x.m;
 	mau = x.m*y.m;
	 
	tmp.t  = tu, tmp.m = mau;
	cout << "\n Hieu Cua 2 Phan So La : " << x.t <<"/"<< x.m <<" - "<< y.t <<"/"<< y.m <<" = "<< tmp.t <<"/"<< tmp.m << endl;
 }
 
 void PS::tich(PS x, PS y)
 {
 	PS tmp;
 	int tu, mau;
 	tu  = x.t*y.t;
 	mau = x.m*y.m;
	 
	tmp.t  = tu, tmp.m = mau;
 	cout << "\n Tich Cua 2 Phan So La : "  << x.t <<"/"<< x.m <<" * "<< y.t<<"/"<< y.m <<" = "<< tmp.t <<"/"<< tmp.m << endl;
}
 
 void PS::thuong(PS x, PS y)
 {
 	PS tmp;
 	int tu, mau;
 	tu  = x.t*y.t;
 	mau = x.m*y.m;
	 
	tmp.t  = tu, tmp.m = mau;
    cout <<"\nThuong cua 2 phan so la: " << x.t <<"/"<< x.m <<" : "<< y.t<<"/"<< y.m <<" = "<< tmp.t <<"/"<< tmp.m << endl;
}
 
 int main()
 {
 	PS a, b;
 	cout << "\nPhan So Thu Nhat La : ";
 	a.nhap();
 	a.xuat();
 	
 	cout << "\nPhan So Thu Hai La  : ";
 	b.nhap();
 	b.xuat();
 	
 	a.tong(a, b);
 	a.hieu(a, b);
 	a.tich(a, b);
 	a.thuong(a, b);
 	cout << endl;
 	return 0;
 }
 
 
 
 
 
