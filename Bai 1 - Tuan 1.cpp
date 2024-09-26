//Nguyen Van Huong - DHTI15A5HN

#include <iostream>
using namespace std;

int main()
{
	int a, b, a1, b1;
	int TongThuc, TongAo, HieuThuc, HieuAo;
	
	cout << "Nhap so phuc thu nhat " << endl;
	cout << "Nhap phan thuc a : "; cin >> a;
	cout << "Nhap phan ao   b : "; cin >> b;
	cout << "Nhap so phuc thu hai " << endl;
	cout << "Nhap phan thuc a1 : "; cin >> a1;
	cout << "Nhap phan ao   b1 : "; cin >> b1;
	
	TongThuc = a + a1;
	TongAo   = b + b1;
	HieuThuc = a - a1;
	HieuAo   = b - b1;
	
	cout << "Tong 2 so phuc la : " << TongThuc << " + " << TongAo << "*j" << endl;
	cout << "Hieu 2 so phuc la : " << HieuThuc << " + " << "( " << HieuAo << ")*j" << endl;
	 .	 	
return 0;
}
