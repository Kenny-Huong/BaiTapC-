#include <iostream>
using namespace std;

class SHAPE{
	public:
		virtual void nhap() = 0;
		virtual void xuat() = 0;
		virtual float chuvi() = 0;
		virtual float dtich() = 0;
		friend  float sumc();
		friend  float sums();
};

class ROUND : public SHAPE{
	private:
		float r;
	public:
		ROUND(float r = 0)
		{
			this -> r = r;
		}
		
		void nhap()
		{
			cout << "Nhap ban kinh r : "; cin >> r;
		}
		
		void xuat()
		{
			cout << "Hinh tron co ban kinh : " << r << endl;
			cout << "-> Chu vi la : " << chuvi() << endl;
			cout << "-> Dien tich la : " << dtich() << endl; 
		}
		
		float chuvi()
		{
			return 2*3.14*r;
		}
		
		float dtich()
		{
			return 3.14*r*r;
		}
};

class REC : public SHAPE{
	private:
		float d, r;
	public:
		REC(float d = 0, float r = 0)
		{
			this -> d = d;
			this -> r = r;
		}
		
		void nhap()
		{
			cout << "Nhap chieu dai HCN : "; cin >> d;
			cout << "Nhap chieu rong HCN : "; cin >> r;
		}
		
		void xuat()
		{
			cout << "HCN co chieu dai " << d << " & chieu rong " << r << endl;
			cout << "-> Chu vi : " << chuvi() << endl;
			cout << "-> Dien tich : " << dtich() << endl;
		}
		
		float chuvi()
		{
			return (d+r)*2;
		}
		
		float dtich()
		{
			return d*r;
		}
};

class TRI : public SHAPE{
	private:
		float a, b, c;
	public:
		TRI(float a = 0, float b = 0, float c = 0)
		{
			this -> a = a;
			this -> b = b;
			this -> c = c;
		}
		
		void nhap()
		{
			cout << "Nhap do dai 3 canh a, b, c" << endl;
			cout << "a: "; cin >> a;
			cout << "b: "; cin >> b;
			cout << "c: "; cin >> c;			
		}
		
		void xuat()
		{
			cout << "3 canh tam giac vua nhap la  ";
			cout << "\na: " << a;
			cout << "\nb: " << b;
			cout << "\nc: " << c;
			cout << "Chu vi : " << chuvi() << endl;
			cout << "Dien tich : " << dtich() << endl;
		}
		
		float chuvi()
		{
			return a+b+c;
		}
		
		float dtich()
		{
			return (1/2)*a*b;
		}
};

void sumc(int n, SHAPE* a[])
{
	float sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += a[i] -> chuvi();
	}
	
	cout << "--> Tong chu vi la : " << sum << endl;
}

void sums(int n, SHAPE* a[])
{
	float sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += a[i] -> dtich();
	}
	
	cout << "--> Tong dien tich la : " << sum << endl;
}

int main()
{
	int n;
	cout << "Moi nhao so luong hinh : "; cin >> n;
	while(n < 1)
	{
		cout << "Moi nhap lai so luong hinh : "; cin >> n;
	}
	
	SHAPE* a[100];
	cout << "\n1.Hinh tron \n2.Hinh chu nhat \n3.Hinh tam giac \n4.Stop" << endl;
	for(int i = 0; i < n; i++)
	{
		int chon;
		cout << "\nChon : "; cin >> chon;
		if(chon == 1)
			a[i] == new ROUND();
		if(chon == 2)
			a[i] == new REC();
		if(chon == 3)
			a[i] == new TRI();
		if(chon == 4)
			break;
		a[i] -> nhap();
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << "\nThong tin hinh thu : " << i + 1;
		a[i] -> xuat();
	}
	sumc(n, a);
	sums(n, a);
	cout << endl;
	return 0;
}