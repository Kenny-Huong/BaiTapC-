#include <iostream>
#include <math.h>
using namespace std;

		// Tinh n!
/*		
float giai_thua(int x)
{
	if (x == 0)
		return 1;
	else 
		return x*giai_thua(x - 1);
}
int main(){
	int n;
	cout << "Nhap n : "; cin >> n;
	cout << "Giai thua cua " << n << " la : " << giai_thua(n) << endl;
	return 0;
}
*/

			// Day Fibonaci
/*
float Fib(int x)
{
	if (x <= 2)
		return 1;
	else
		return Fib(x - 1) + Fib(x - 2);
	}
int main(){
	int n;
	cout << "Nhap n : "; cin >> n;
	cout << "So thu " << n << " cua day Fib la : " << Fib(n) << endl;
	return 0;
}
*/

		//S = 1 + 2 + 3 + .. .+ n
/*		
float Sum(int x)
{
	if (x == 0)
		return 0;
	else
		return Sum(x - 1) + x;
	}
int main(){
	int n;
	cout << "Nhap so thu n : "; cin >> n;
	cout << "Sum (" << n << ") = " << Sum(n) << endl;
	return 0;
}
*/
	
		//S = 1 + 1/2 + 1/3 ... + 1/n
/*
float Sum(int x)
{
	if (x == 1)
		return 1;
	else
		return Sum(x - 1) + (float)1/x;
	}
int main(){
	int n;
	cout << "Nhap n : "; cin >> n;
	cout << "Sum = "<< Sum(n) << endl;
	return 0;
}		
*/

			//Sn =1^1 * 2^2 * 3^3 * ... n^n
/*
double LuyThua(int x)
{
	if ( x == 1 )
		return 1;
	else 
		return LuyThua(x - 1)*pow(x,x);	
		
}
int main(){
	int n;
	cout << "Nhap vao n : "; cin >> n;
	cout << "Luy thua S" << n << " = " << LuyThua(n) << endl;
	return 0;
}
*/

	/* -----Bai Tap Tu Giai-----*/
	//Bai 1 :  S = 1 + 4 + 9 + ... + n^2
/*
double TinhTong(int x)
{
	if (x == 1)
		return 1;
	else 
		return TinhTong(x -1 ) + pow(x,2);	
}
int main(){
	int n;
	cout << "Nhap vao n : "; cin >> n;
	cout << "Tong cua day S = " << TinhTong(n) << endl;
	return 0;
}
*/

	//Bai 2 : P = 1 * 3  * 5 *.. * (2n -1 )
/*
long TinhTich(int x)
{	
	if (x == 1)
		return 1;
	else 
		return TinhTich(x - 1) * (2*x -1);
}
int main(){
	int n;
	cout << "Nhap vao n : "; cin >> n;
	cout << "Tich cua day P = " << TinhTich(n) << endl;
	return 0;
}
*/

	// Bai 3 : Tinh to hop chap k cua n nCk
/*
float GiaiThua(int x){
	if (x == 0)
		return 1;
	else 
		return GiaiThua(x - 1) * x; 
} 
int main(){
	int n, k, C = 1; 
	cout << "Nhap n : "; cin >> n;
	cout << "Nhap k : "; cin >> k;
	C = (GiaiThua(n)) / (GiaiThua(k)*GiaiThua(n - k));
	cout << n << "C" << k << " = " << C << endl;
	return 0;
}
*/
	
	// Bai 4 : tim Ucln cua 3 so

//Cach 1:
/*
unsigned int UCLN( int m, int n){
	if ( m == n)
		return m;
	else 
		if (m > n)
			return UCLN(m - n, n);
		else 
			return UCLN(m, n -m);
}
int main(){
	unsigned int a, b, c;
	cout << "Nhap a : "; cin >> a;
	cout << "Nhap b : "; cin >> b;
	cout << "Nhap c : "; cin >> c;
	cout << "UCLN = " << UCLN(UCLN(a,b),c) << endl;
	return 0;
}
*/
//Cach 2:
/*
unsigned int UCLN(int m, int n){
	if (n == 0) return m;
	else 
		return UCLN(n, m%n);
}
int main(){
	unsigned int a, b, c;
	cout << "Nhap a : "; cin >> a;
	cout << "Nhap b : "; cin >> b;
	cout << "Nhap c : "; cin >> c;
	cout << "UCLN = " << UCLN(UCLN(a,b),c) << endl;
	return 0;
}
*/

	// Bai 5 : Tinh x(n) De Quy Phi Tuyen
/*	
long x(int x){
	if (x == 0)
		return 1;
	long s = 0;
	for (int i = 0; i < n; i++)
		s = s + pow (n - i, 2) * x(i); 
	return s;
}
int main (){
	int n;
	float xn;
	cout << "Nhap n : "; cin >> n;
	cout << "xn = " << x(n) << endl;
	return 0; 
}
*/

		//Bai 6 : xep dia 
/*
void ChuyenDia ( int num, char x, char y, char z){
	if (num > 0){
		ChuyenDia (num - 1, x, z, y);
		cout << x << " --> " << z << endl;
		ChuyenDia ( num  - 1 , y, x, z);
	}
}
int main (){
	int n;
	cout << "Nhap so dia : "; cin >> n;
	cout << "Viec chuyen dia nhu sau " << endl;
	ChuyenDia(n, 'A', 'B', 'C');
	return 0;
}
*/

	//Bai 7 : tim kiem nhi phan tren 1 day da sap xep
	
int ktnp (int a[], int left, int right ) 



















