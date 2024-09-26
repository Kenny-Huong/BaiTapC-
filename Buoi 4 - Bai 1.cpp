#include <iostream>
using namespace std;

class BenhNhan{
		char ten[30], quequan[30];
		int namsinh;
	
	public:
		void nhap()
		{
			cout << "Nhap ten  : "; fflush(stdin); cin.getline(ten, 30);
			cout << "Nhap que quan : "; fflush(stdin); cin.getline(quequan, 30);
			cout << "Nhap nam sinh  : "; cin >> namsinh;
		}
		
		void xuat()
		{
			cout << "Ho ten benh nhan : " << ten;
			cout << "\nQue quan : " << quequan;
			cout << "\nNam sinh : " << namsinh;
		}
		
		int GetNs()
		{
			return namsinh;
		}
};

class BenhAn : public BenhNhan{
	private:
		char tenBA[30];
		double tienVP;
	
	public:
		void nhap()
		{
			BenhNhan :: nhap();
			cout << "Nhap ten benh an : "; fflush(stdin); cin.getline(tenBA, 30);
			cout << "Nhap tien vien phi : "; cin >> tienVP;
			cout << endl;
		}
		
		void xuat()
		{
			BenhNhan :: xuat();
			cout << "\nTen benh an : " << tenBA;
			cout << "\nTien vien phi : " << tienVP;
//			cout << "\Tuoi : " << tuoi();
			cout << endl;
 		}
 		
//		int tuoi()
//		{
//			//Khai bao bien Time de lay time hien tai
//			time_t Time = time(0);
//			
//			//Khoi tao con tro Now de lay gtri tu time
//			tm* Now = localtime(&Time);
//			
//			int t = 1900 + Now->tm_year - getNS();
//		}
		int GetTuoi()
		{
			return tuoi();
		}
};

int main(){
	BenhAn a[100];
	int n;
	cout << "Nhap so Benh An : "; cin >> n;
	
	for(int i =0; i < n; i++)
	a[i].nhap();
	for(int i = 0; i < n; i++)
	{
		cout << "Benh nhan thu : " << i + 1 << endl;
		a[i].xuat();
	}
}