#include <iostream>
using namespace std;

class SieuThi{
	private:
		
};

class Quay : public SieuThi{
	private:
		int maQuay, soThuTu;
		float dienTich;
		double doanhThu;
	
	public:
		
		virtual double tinhThueDoanhThu() = 0;
		virtual double tinhTienDichVu()
		{
			return 0;
		}
		virtual double tinhTienThueQuay()
		{
			return 40000000 * dienTich;
		}
	
		virtual double tinhTienPhaiDong() {}
		virtual void nhap()
		{
			cout << "Nhap ma quay : "; cin >> maQuay;
			cout << "Nhap so thu tu : "; cin >> soThuTu;
			cout << "Nhap dien tich(m2) : "; cin >> dienTich;
		}
		
		virtual void xuat()
		{
			
		}
		
		virtual int check() = 0;
};

class quayThucPham : public Quay{
	private:
		int tienDV;
	public:
		double tinhThueDoanhThu() override
		{
			return 0.05;
		}
		
		double tinhTienDichVu() override
		{
			
		}
		
		
};

class quayQuanAo : public Quay{
	
};

class quayTrangSuc : public Quay{
	
};

