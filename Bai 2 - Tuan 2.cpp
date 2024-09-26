#include <iostream>
using namespace std;

struct PhanSo
{
	int Ts;
	int Ms;	
 }; 
 
 void NhapPs(PhanSo &x)
 {
 	cout << "Nhap Tu So : "; cin >> x.Ts;
 	do
 	{
		cout << "Nhap Mau So : ";
		cin >> x.Ms;
		if(x.Ms == 0)
		cout << "Nhap sai, yeu cau nhap lai mau so : ";
	}while (x.Ms == 0);
 }
 
 void XuatPs(PhanSo x)
 {
 	cout << x.Ts << "/" << x.Ms;
 }
 
 float TongPs(PhanSo x1, PhanSo x2)
 {
 	int Tu, Mau;
 	Tu = x1.Ts * x2.Ms + x1.Ms * x2.Ts;
 	Mau = x1.Ms * x2.Ms;
 	return (float) Tu/Mau;
 }
 
 int main()
 {
 	PhanSo ps1, ps2;
 	cout << "Nhap phan so : " << endl;
 	NhapPs(ps1);
 	NhapPs(ps2);
 	cout << "\nPhan so thu nhat la : "; XuatPs(ps1);
 	cout << "\nPhan so thu hai  la : "; XuatPs(ps2);
 	cout << "\nTong 2 phan so la   : " << TongPs(ps1, ps2);
 	cout << endl;
 	return 0;
 }
