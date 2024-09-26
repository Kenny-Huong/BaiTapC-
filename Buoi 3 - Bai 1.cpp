#include <iostream>
#include <math.h>
using namespace std;

class SP
{
	private:
		int pt, pa;
	public:
		SP(int pt = 0, int pa = 0)
		{
			this -> pt = pt;
			this -> pa = pa;
		}
		
		friend istream& operator >> (istream &is, SP &k)
		{
			cout << "Nhap phan thuc : "; is >> k.pt;
			cout << "Nhap phan ao : "; is >> k.pa;
			
			return is;
		}
		
		friend ostream& operator << (ostream &os, SP k)
		{
			if (k.pa >= 0)
				os << k.pt << " + " << k.pa << "i" << endl;
			else 
				os << k.pt << " - " << fabs(k.pa) << "i" << endl;
			return os;
		}
		
};


int main()
{	
	SP a, b;
	cout << "* Nhap so phuc thu nhat \n"; cin >> a;
	cout << "* Nhap so phuc thu hai \n"; cin >> b;
	cout << "\nHai So Phuc vua nhap la :\n";
	cout << a;
	cout << b; 
	cout << endl;
	
	return 0;
}