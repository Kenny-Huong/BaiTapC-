#include <iostream>
using namespace std;

class PS
{
	private:
		int a, b;
	public:
		PS(int a = 0, int b = 1)
		{
			this -> a = a;
			this -> b = b;
		}
		
		~PS()
		{	
		}
		
		void xuat()
		{		
			cout << a << "/" << b; 
	    }
	    
	    PS tong(PS x, PS y)
	    {
	    	return PS((a * x.b) + (x.a * b), b * x.b);
		}
		
		PS hieu(PS y)
		{
			return PS(a - y.a, b - y.b);
		}
};

int main()
{
	PS ps1(3, 5);
	PS ps2(2, 7);
	PS ps3, ps4;
	cout << "\nPhan so thu nhat la : " ; ps1.xuat();
	cout << "\nPhan so thu hai la : " ; ps2.xuat();
	ps3 = 
	ps4 = 
	cout << "\nTong 2 phan so la : " ;ps3.xuat();
	cout << "\nHieu 2  phan so la : "; ps4.xuat();
	
	
	
}