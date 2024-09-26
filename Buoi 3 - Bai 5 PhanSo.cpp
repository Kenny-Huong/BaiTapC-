//Tạo lớp phân số PS gồm 2 thành phần thuộc tính là tử số và mẫu số kiểu số nguyên.
//Trong lớp có các hàm sau:
//- Hàm khởi tạo có các tham số với giá trị ngầm định
//- Hàm hủy
//- Tái định nghĩa toán tử nhập >>, xuất <<.
//- Tái định nghĩa các phép toán cộng +, trừ -, nhân *, chia / 2 phân số.
//Viết chương trình nhập vào 2 phân số, In ra màn hình tổng, hiệu, tích, thương của 2 phân
//số đó

#include <iostream>
using namespace std;

class PS{
	private:
		int tu, mau;
	public:
		
	
	void nhap()
	{
		cout << "\nNhap tu so : "; cin >> tu;
		cout << "Nhap mau so : "; cin >> mau;
	}
	
	void xuat()
	{
		cout << tu << "/" << mau;
	}
};


PS operator + (PS p1, PS p2)
{
	PS ps;
	ps.tu = p1.tu*p2.mau + p2.tu*p2.mau;
	ps.mau = p1.mau*p2.mau;
	
	return ps;
}

PS operator - (PS p1, PS p2)
{
	PS ps;
	ps.tu = p1.tu*p2.mau - p2.tu*p2.mau;
	ps.mau = p1.mau*p2.mau;
	
	return ps;
}

PS operator * (PS p1, PS p2)
{
	PS ps;
	ps.tu = p1.tu*p2.tu;
	ps.mau= p1.mau*p2.mau;
	
	return ps;
}

PS operator / (PS p1, PS p2)
{
	PS ps;
	ps.tu = p1.tu * p2.mau;
	ps.mau = p2.tu * p1.mau;
	
	return ps;
}

int main()
{
	PS ps, p1, p2;
	cout << "Nhap vao phan so thu nhat "; p1.nhap();
	cout << "Nhap vao phan so thu hai  "; p2.nhap();
	cout << "\nTong 2 Phan So la : "; ps = p1 + p2; ps.xuat();
	cout << "\nHieu 2 Phan So la : "; ps = p1 - p2; ps.xuat();
	cout << "\nTich 2 Phan So la : "; ps = p1 * p2; ps.xuat();
	cout << "\nThuong 2 Phan So la : "; ps = p1 / p2; ps.xuat();
	
	return 0;
}