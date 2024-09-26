#include <iostream>
#include <string>
using namespace std;

class person{
	protected:
		string name, address;
		long int phone;
	public:
		person()
		{
			name = address = " ";
			phone = 0;
		}
		
		person(string name, string address, long int phone)
		{
			this -> name = name;
			this -> address = address;
			this -> phone = phone;
		}
		
		~person()
		{
			
		}
		
		void nhap()
		{	
			fflush(stdin);
			cout << "Nhap ten : "; getline(cin, name);
			cout << "Nhap dia chi : "; getline(cin, address);
			cout << "Nhap so dien thoai : "; cin >> phone;
		}
		
		void xuat()
		{
			cout << "\nHo va ten : " << name;
			cout << "\nDia chi : " << address;
			cout << "\nSo dien thoai : " << phone;
		}
		
		string GetAddress()
		{
			return address;
		}
};

class officer : public person{
	private:
		int salary;
	public:
		officer() : person()
		{
			salary = 0;
		}
		
		officer(long double salary) : person(person())
		{
			this -> salary = salary;
		}
		
		~officer()
		{
			;
		}
		
		void nhap()
		{
			person :: nhap();
			cout << "Nhap luong : "; cin >> salary;
		}
		
		void xuat()
		{
			person :: xuat();
			cout << "\nLuong : " << salary;
		}
		
		double GetLuong()
		{
			return salary;
		}
};

class manager : public officer{
	private:
		float extra;
	public:
		manager() : officer()
		{
			extra = 0;	
		}	
		
		manager( float extra) : officer(officer())
		{
			this -> extra = extra;
		}
		
		~manager()
		{
			
		}
		
		void nhap()
		{
			officer : nhap();
			cout << "Nhap extra : "; cin >> extra;
		}
		
		void xuat()
		{
			officer : xuat();
			cout << "\nExtra : " << extra;
		}
};

void nhap_ds_m(int &n, manager a[])
{
	for(int i = 0; i < n; i++)
	{
		cout << "\n*Nhap thong tin Manager thu " << i + 1 << endl;
		a[i].nhap();
	}
}

void xuat_ds_m(int n, manager a[])
{
	for(int i = 0; i < n; i++)
	{
		cout << "\n-> Thong tin Manager thu " << i + 1 << endl;
		a[i].xuat();
	}
}

void show(int n, manager a[])
{
	cout << "Doi tuong co dia chi o 'HA Noi' va luong khac 10tr " << endl;
	for(int i = 0; i < n; i++)
	{
		if(a[i].GetAddress() == "Ha Noi" && a[i].GetLuong() != 10000000)
			a[i].xuat();
	}
}

int main()
{
	int n;
	cout << "Nhap so luong Manager : "; cin >> n;
	while(n < 1)
	{
		cout << "Moi nhap lai so luong Manager : "; cin >> n;
	}
	manager a[n];
	nhap_ds_m(n, a);
	xuat_ds_m(n, a);
	show(n, a);
	
	return 0;
}