#include <iostream>
using namespace std;

class HCN
{
	protected:
		float d, r;
	public:
		
		void nhap()
		{
			cout << "Nhap chieu dai HCN : "; cin >> d;
			cout << "Nhap chieu rong HCN : "; cin >> r;
		}
		
		void xuat()
		{
			cout << "HCN vua nhap co kich thuoc (" << d << "," << r << ")";
			
		}
		
		float ChuVi()
		{
			return 2*(d+r);
		}
		
		float DienTich()
		{
			return d*r;
		}
};

int main()
{
	HCN h;
	h.nhap();
	h.xuat();
	cout << "\nChu vi cua HCN la : " << h.ChuVi();
	cout << "\nDien tich cua HCN la : " << h.DienTich();
}