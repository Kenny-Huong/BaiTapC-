#include <iostream>
using namespace std;
struct Date
{
	int ngay,thang,nam;
	Date()
	{
		ngay=thang=nam=0;
	}
};
class KH
{
	private:
		char ht[30], cmt[10], k[50];
		Date ns;
	public:
		KH(char* ht=" ", char* cmt=" ", char* k=" ",Date ns=Date())
		{
			strcpy(this->ht,ht);
			strcpy(this->cmt,cmt);
			strcpy(this->k,k);
			this->ns=ns;
		}
		~KH()
		{
			;
		}
		void nhap()
		{
			cout <<"\nNHAP THONG TIN KHACH HANG:\n";
			fflush(stdin);
			cout <<"\tNhap ho ten: ";
			cin.getline(ht,30);
			
			cout <<"\tNhap ngay sinh:\n";
			cout << "\t\tNhap ngay: ";
			cin >> ns.ngay;
			cout <<"\t\tNhap thang: ";
			cin >> ns.thang;
			cout <<"\t\tNhap nam: ";
			cin >> ns.nam;
			
			fflush(stdin);
			cout <<"\tNhap so chung minh thu: ";
			cin.getline(cmt,10);
			
			cout <<"\tNhap ho khau: ";
			cin.getline(k,50);
			
		}
		void xuat()
		{
			cout <<"\nXUAT THONG TIN KHACH HANG:\n";
			cout <<"\tHo ten la: " << ht
				<<"\n\tNgay sinh la: " << ns.ngay <<"/"<< ns.thang <<"/"<< ns.nam
				<<"\n\tSo cmt: " << cmt
				<<"\n\tHo khau: " << k
				<< endl;
		}
};
int main()
{
	KH a;
	a.nhap();
	a.xuat();
	cout << endl;
	return 0;
}