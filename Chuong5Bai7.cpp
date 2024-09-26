#include <iostream>
using namespace std;

int main ()
{
	char n;
	int dem = 0, s = 0;
	while (n != '*')
	{
		cout <<"Nhap ki tu: ";
		cin >> n;
		dem++;
		if (n == 'k')
		{
			s++;
		}
	}
	cout <<"So ki tu da nhap khong ke '*' la: " << dem - 1 << endl;
	cout <<"So ki tu 'k' la: " << s << endl;
	return 0; 
}
