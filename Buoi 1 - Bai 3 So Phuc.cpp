#include <iostream>
using namespace std;

class SP
{
	private:
		float a, b;
	public:
		SP(int a = 0, int b = 0)
		{
			this -> a = a;
			this -> b = b;
		}
		~SP(){
		}
		
		void xuat()
		{
			if(b >= 0)
				cout << a << "+" << b << "*j";
			else
				cout << a << "-" << abs(b) << "*j"; 
		}
		
		SP tong(SP x)
		{
			return SP(a + x.a, b + x.b);
		}
};

int main()
{
	SP sp1(3,4);
	SP sp2(4,5);
	SP sp3(5,6);
	SP sp4;
	sp4 = (sp1.tong(sp2)).tong(sp3);
	cout << "Tong ba so phuc la: ";
	sp4.xuat();
	cout<<endl;
	return 0;
}