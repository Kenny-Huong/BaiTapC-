#include <iostream>
#include <math.h>
const float PI = 3.14;
using namespace std; 

class Dathuc3{
	private:
		int a, b, c, d;
	public:
		Dathuc3(int a = 0, float b = 0, float c = 0, float d = 0)
		{
			this -> a = a;
			this -> b = b;
			this -> c = c;
			this -> d = d;
		}
		~Dathuc3()
		{
			;
		}
		void nhap();
		void xuat();
		void tinh();
		void tong(Dathuc3 a, Dathuc3 b);
};

void Dathuc3::nhap(){
	cout << "Nhap he so a : "; cin >> a;
	cout << "Nhap he so b : "; cin >> b;
	cout << "Nhap he so c : "; cin >> c;
	cout << "Nhap he so d : "; cin >> d;
	
}

void Dathuc3::xuat(){
	cout << "\nPhuong Trinh Bac 3 La : " << a << "x^3 + " << b << "x^2 + " << c << "x +" << d << " = 0 " << endl; 
}

void Dathuc3::tinh(){
	if (a == 0)
	{
		if(b == 0)
		{
			if(c == 0)
			{
				if(d == 0)
					cout << "\nPhuong Trinh Co Vo So Nghiem !";
				else 
					cout << "\nPhuong Trinh Vo Nghiem !";	
			}
			else 
				cout << "\n=> Phuong Trinh Bac Nhat Co Dang : " << "x + " << d << endl
					 << "\tCo Nghiem x = " << -d / c << "\n";
		}
		else
		{
			float delta = c*c - 4*d*b;
			cout << "\n=> Phuong Trinh Bac 2 Co Dang : " << b << "x^2 + " << c << "x + " << d << " = 0\n";
			if (delta > 0)
			{
				cout << "Phuong Trinh Co 2 Nghiem Phan Biet x1, x2 : " << endl
					 << "x1 = " << (-c + sqrt(delta)) / (2 * b) << "\nx2 = " << (-c - sqrt(delta)) / (2 * b) << endl;
			}
			else if(delta == 0)
				cout << "Phuong Trinh Co Nghiem Kep x1 = x2 = " << -c / (b * b) << endl;
			else 
				cout << "Phuong Trinh Vo Nghiem ! ";
		}
	}
	else 
	{
		float delta = b*b - 3*a*c;
		float k = (9*a*c*b - 2*b*b*b - 27*a*a*d) / (2 * sqrt(pow(fabs(delta), 3)));
		if (delta > 0)
		{
			if (fabs(k) <= 1)
			{
				cout << "Phuong Trinh Co 3 Nghiem : x1, x2, x3 \n"
					 << "x1 = " << (2*sqrt(delta)  * cos(acos(k) / 3*a) - b) / (3*a)
					 << "x2 = " << (2*sqrt(delta)) * cos((acos(k) / 3*a) + ((2 * PI) / 3) - b) / (3 * a)
					 << "x3 = " << (2*sqrt(delta)) * cos((acos(k) / 3*a) - ((2 * PI) / 3) - b) / (3 * a) 
					 << endl; 
 			}
 			else 
 				cout << "Phuong Trinh Co Nghiem Duy Nhat x = " << ((sqrt(delta) * fabs(k)) / (3 * a)) * ((pow(fabs(k) +  sqrt(k*k-1), 1 / 3)) + (pow(fabs(k) - sqrt(k*k-1),1/3))) - (b /( 3*a)) << endl;
		}
		else 
		{
			if(delta == 0)
				cout << "Phuong Trinh Co Mot Nghiem Boi  x = " << (-b * pow(b*b*b - 27*a*a*d, 1/3)) / (3*a);
			else 
				cout << "Phuong Trinh Co Nghiem Duy Nhat x = " << ((sqrt(delta) * fabs(k)) / (3 * a)) * (pow(fabs(k) + sqrt(k*k+1),1/3) + pow(fabs(k) - sqrt(k*k+1), 1/3)) - (b / (3 * a)) <<endl;
		}
	}	
	
}

void Dathuc3::tong(Dathuc3 x, Dathuc3 y)
{
	cout << "Tong Cua 2 Da Thuc La : "
		 << x.a + y.a << "x^3 + " << x.b + y.b << "x^2 + " << x.c + y.c << "x +" << x.d + y.d << "=0\n";
}


int main()
{
	Dathuc3 a, b;
	cout << "Nhap Da Thuc So 1 \n";
	a.nhap();
	a.xuat();
	a.tinh();
	cout << "Nhap Da Thuc So 2 \n";
	b.nhap();
	b.xuat();
	b.tinh();
	a.tong(a, b);
	cout << endl;
	return 0;
}
