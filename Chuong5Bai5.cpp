#include <iostream>
using namespace std;
#include <math.h>
using namespace std;
int main ()
{
	int n;
	float p = 1;
	cout <<"Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		p = p * (2*i - 1);
	}
		cout <<"Tich P la: " << p << endl;
	return 0;
}
