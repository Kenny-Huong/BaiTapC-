#include <iostream>
using namespace std;

void Nhap(int a[50][50], int n)
{ 	
	cout << "Nhap cac phan tu cua mang :" << endl;
	for(int i = 1; i <= n ; i++ )
	{
		for(int j = 1; j <= n; j++)
		{
			cout << "a["<<i<<j<<"] = ";
			cin >> a[i][j];
		}
	}
}
void Xuat(int a[50][50], int n)
{
	cout << "\tMang vua nhap la : " << endl ;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cout << "\t" << a[i][j] << "  ";
		}
		cout << endl;
	}
}
void TBC(int a[50][50], int n)
{
	int dem = 0, s = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(a[i][j] % 7 == 4)
			{
				s += a[i][j];
				dem++;	
			}
		}
	}
	cout << "\tTrung binh cong cac so chia 7 du 4 trong mang : " << s/dem << endl;
}
void Min(int a[50][50], int n)
{ 
	int Min = a[1][n];
	for(int i = 2; i <= n; i++)
	{
		if(a[i][n-i+1] < Min)
		Min = a[i][n-i+1];	
	}
	cout << "\tGia tri nho nhat tren duong cheo phu cua mang : " << Min << endl; 
}
int main(){
	int a[50][50], n;
	cout << " nhap gia tri n : "; cin >> n;
	Nhap(a,n);
	Xuat(a,n);
	TBC(a,n);
	Min(a,n);
}
