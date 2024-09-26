#include <iostream>
using namespace std;
#include <math.h>

using namespace std;
int main ()
{
	int m, n;
	cout <<"So hang cua ma tran la: ";
	cin >> m;
	cout <<"So cot cua ma tran la: ";
	cin >> n;
	
	int a[m][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout <<"Nhap gtri: A["<<i<<"]["<<j<<"] = ";
			cin >> a[i][j];
		}
	}
	float dem = 0, s = 0;
    for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j])
			{
				dem++;
				s += a[i][j];
			}
		}
	}
	cout <<"TBC cac phan tu am cua mang: " << s/dem << endl;
	
	int max;
	max = a[0][0];
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
		     if (a[i][j] > max)
		     {
			     max = a[i][j];
	         }
        }
	}
	cout <<"Phan tu lon nhat trong mang la: " << max << endl;
}

