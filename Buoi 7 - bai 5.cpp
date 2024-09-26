//Xây dựng khuôn hình lớp thực hiện các thao tác: tạo mảng, in mảng, tính tổng các phần tử trên mảng một chiều

#include <iostream>
using namespace std;

template<class T>
class mang{
	protected:
		T a;
	public:
		mang(T a = 0)
		{
			this -> a = a;
		}
		void nhap(T a[], int n)
		{
			for(int i = 0; i < n; i++)
			{
				cout << "a[" << i + 1 << "] : "; cin >> a[i];
			}
		}
		
		void xuat(T a[], int n)
		{
			cout << "Mang da nhap " << endl;;
			for(int i = 0; i < n; i++)
			{
				cout << "a[" << i + 1 << "] : " << a[i] << endl;
			}
		}
		
		T tong(T a[], int n)
		{
			T s = 0;
			for(int i = 0; i < n; i++)
			{
				s += a[i];
			}
			return s;
		}
};	

int main()
{	
	int n;
	cout << "Nhap so ptu trong mang : "; cin >> n;
	mang<int>mang;
	int a[n];
	mang.nhap(a, n);
	mang.xuat(a, n);
	cout << "Tong cac ptu trong mang la : " << mang.tong(a, n);
	
	return 0;
}



























































































