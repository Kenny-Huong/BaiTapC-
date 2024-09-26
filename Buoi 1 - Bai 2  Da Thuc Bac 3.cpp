#include <iostream>
using namespace std;

class DaThuc2
{
	private:
		int a, b, c;
	public:
		DaThuc3(int a = 0, int b = 0, int c = 0)
		{
			this -> a = a;
			this -> b = b;
			this -> c = c;
		}
		
		~DaThuc2()
		{
		}
		
		void xuat()
		{
			cout << a << "x^2";
			if(b >= 0)
			{
				cout << "+" << b << "x";
			}
			else cout << b << "x";
			if(c >= 0)
			{
				cout << "+" << c;
			}
			else cout << c;
			cout << endl;
		}
		DaThuc2 tong(DaThuc2 x){
	        return DaThuc2(a + x.a, b + x.b, c + x.c);
		}
};
int main()
{
	DaThuc2 x(1, 3, 5);
	DaThuc2 y(3, 4, 5);
	DaThuc2 sum;
	sum = x.tong(y);
	cout << "Da thuc thu nhat : "; x.xuat();
	cout << "Da thuc thu hai : "; y.xuat();
	cout << "Tong 2 da thuc la : "; sum.xuat();
	return 0;
}