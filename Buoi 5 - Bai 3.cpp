 #include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

class Mayin{
	protected:
		string sohieu;
		float soluong;
	public:
		Mayin(string sohieu = " ", float soluong = 0){
			this -> sohieu  = sohieu;
			this -> soluong = soluong;
		}
		~Mayin(){}
		
		void nhapkho(int q)
		{
			this -> soluong += q;
		}
		
		void xuatkho(int q)
		{
			this -> soluong = soluong - q;
		}
		
		void nhapsh()
		{
			fflush(stdin);
			cout << "Nhap so hieu: "; getline(cin,sohieu);
		}
		
		void nhapsl()
		{
			cout << "Nhap so luong: "; cin>>soluong;
		}
		
		void xuatsh()
		{
			cout<<"|"<<setw(10)<<sohieu;
		}
		
		void xuatsl()
		{
			cout<<"|"<<setw(10)<<soluong;
		}
};

class laser : public Mayin{
	protected:
		int dpi;
	public:
		laser(string sohieu = " ", float soluong = 0, int dpi = 0){
			this -> sohieu = sohieu;
			this -> soluong = soluong;
			this -> dpi = dpi;
		}
		~laser(){}
		
		void nhapls()
		{
			Mayin::nhapsh();
			Mayin::nhapsl();
			cout << "DPI la: "; cin >> dpi;
		}
		void xuatls()
		{
			Mayin::xuatsh();
			Mayin::xuatsl();
			cout << "|" << setw(10) << dpi;
		}
		
};
class Inmau : public Mayin{
	protected:
		string mau;
	public:
		Inmau(string sohieu = " ", float soluong = 0, string mau =" "){
			this -> sohieu = sohieu;
			this -> soluong= soluong;
			this -> mau = mau;
		}
		~Inmau(){}
		
		void nhapmau()
		{
			//Mayin::nhapsh();
			//Mayin::nhapsl();
			fflush(stdin);
			cout<<"Nhap mau: ";	getline(cin,mau);
		}
		void xuatmau()
		{
			//Mayin::xuatsh();
			//Mayin::xuatsl();
			cout << "|" << setw(10) << mau;
		}
};
class lasermau : public laser,public Inmau
{
	public:
		lasermau( int dpi = 0, string mau = " ")
		{
			this -> dpi = dpi;
			this -> mau = mau;
		}
		~lasermau(){}
		
		void nhaplsm()
		{
			laser :: nhapls();
			Inmau :: nhapmau();
			
		}
		
		void xuatlsm()
		{
			laser :: xuatls();
			Inmau :: xuatmau();
			cout<<"|"<<endl;
		}
};

int main(){
	lasermau m;
	m.nhaplsm();
	m.xuatlsm();
}