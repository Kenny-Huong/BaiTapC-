#include <iostream>
using namespace std;

struct ps
{
	int tu, mau;
};

template<class T>
void nhap_ds(int &n, T a[])
{
	for(int i =0; i < n; i++)
	{
		cout << "Nhap tu so cua ps thu " << i + 1 << " : "; cin >> a[i].tu;
		cout << "Nhap mau so cua ps thu " << i + 1 << " : "; cin >> a[i].mau; 
	}
	cout << endl;
}

template<class T>
void xuat_ds(int n, T a[])
{
	for(int i = 0; i < n; i++)
	{
		cout << "Phan so thu " << i + 1 << " : " << a[i].tu << "/" << a[i].mau;
		cout << endl;
	}
	
}

template<class T>
T Min(int n, T *a)
{
	T min = a[0];
	for(int i = 0; i < n; i++)
	{
		if((a[i].tu/(double)a[i].mau) < (min.tu/(double)min.mau))
		min = a[i];
	}
}

int main()
{	
	int n;
	cout << "Nhap so luong phan so : "; cin >> n;
	ps a[n];
	nhap_ds(n, a);
	xuat_ds(n, a);
	cout << "Phan so nho nhat la : " << Min(n, a).tu << "/" << Min(n, a).mau;
}