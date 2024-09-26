#include <iostream>
using namespace std;

template<class T>

void nhap(T a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] =";
		cin >> a[i];
	}
}

template<class T>

void xuat(T a[], int n)
{
	cout << "Mang vua nhap la : ";
	for(int i = 0; i < n; i++)
	{
		cout  << a[i] << " " ;
	}
}

template<typename T>
T Tong(T *a, int sophantu)
{
	T tong = 0 ;
	for(int i = 0; i < sophantu; i++)
	{
		tong += a[i];
	}
	return tong;
}

int main()
{
	int a[30], n;
	cout << "\nNhap n : "; cin >> n;
	nhap(a, n);
	xuat(a, n);
	cout << "\n-> Tong Mang Nguyen : " 
		 << Tong(a, n) << endl;
	float b[30];
	nhap(b, n);
	xuat(b, n);
	cout << "\n-> Tong Mang Thuc : " << Tong(b, n); 
}