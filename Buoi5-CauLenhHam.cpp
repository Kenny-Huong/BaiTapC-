#include <iostream>
using namespace std;			
			
			
			//tim so lon nhat trong 4 so
/*

int max(int , int);

int main(){
	int a, b, c, d;
	cout << "Nhap a : "; cin >> a;
	cout << "Nhap b : "; cin >> b;
	cout << "Nhap c : "; cin >> c;
	cout << "Nhap d : "; cin >> d;
	cout << "So lon nhat trong 4 so la : ";
	cout << max(max(a, b),  max(c, d)) << endl;
	
} 
int max(int x, int y){
	return (x > y)? x : y;
}
*/

			//So hoan hao
/*		
int ktshh(int x){
	int tong = 0;
	for (int i = 1; i < x; i++)
		if( x % i == 0)
			tong += i;
		if( tong == x)
			return 1;
		return 0;
} 

int main(){
	unsigned int n;
	cout << "Nhap so nguyen duong n : "; cin >> n;
	cout << "Cac so hoan hao trong pham vi " << n << " la : " << endl;
	for (int i = 1; i <= n; i++)
		if (ktshh(i) == 1)
			cout << i << " ";
	return 0;
}
*/

			//vt hàm tìm UCLN cua 4 so nguyen duong
			
/*
unsigned int UCLN(unsigned int m, unsigned int n) {
	while (m != n){
		if (m > n)
			m = m - n;
		else 
			n = n - m;		
	}
	return m;
}
int main(){
	unsigned int a, b, c, d;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "d = "; cin >> d;
	cout << "UCLN(" << a << ",  " << b << ", " << c << ", " << d << ") = " << UCLN(UCLN(a, b),UCLN(c ,d))<< endl;
	return 0;	
}
*/


	//vt ham P(x, y)=x^y. AD tinh a^n vs a ,n nhap vao tu ban phim
/*
		
float LT(int x, int y){
	float p = 1;
	for (int i =1 ; i <= y; i++)
		p *= x;
	return p;	
}

int main(){
	int a, n;
	cout << "Nhap he so a : "; cin >> a;
	cout << "Nhap so mu n : "; cin >> n;
	cout << a << "^" << n << " = " << LT(a , n) << endl;
	return 0;
}
*/


			//Bai 5: vt ham tinh giai thua 
/*
unsigned int GT(int n){
	long p = 1;
	for (int i = 1; i <= n; i++)
		p *= i;
	return p;
}			 

int main (){
	int n;
	cout << "Nhap n : "; cin >> n;
	cout << n << "! = " << GT(n) << endl;
	return 0;
}
*/

		// Bai 6 : tim tat ca uoc cua 1 so nguyen
/*
int U(int x){
	
	for (int i = 1; i <= x; i++){
		if (x % i == 0){
		
		}
	}
	return 0;
}

int main(){
	int n;
	cout << "Nhap n : "; cin >> n;
	cout << "Tat ca uoc so nguyen cua " << n << " la : " << U(n) << endl;
	return 0;
}		
*/

			//Bai 1 : vt ham ktra 3 canh cua tam giac
/*			
int KT(unsigned int x, unsigned int y, unsigned int z){
	if ((x + y > z) || (x + z > y) || (y + z > x))
		return 1;
	else 
		return 0;
		
}		

int main(){
	int a, b, c;
	cout << "Nhap vao 3 so nguyen duong ! " << endl;
	cout << "Nhap a : "; cin >> a;
	cout << "Nhap b : "; cin >> b;
	cout << "Nhap c : "; cin >> c;
	if(KT( a, b, c))
		cout << "La 3 canh cua tam giac ! " << endl;
	else 
		cout << "Khong la 3 canh cua tam giac " << endl;
	return 0;
	
}
*/


	// Ktra so nguyen to trong pham vi n 
/*
int KT(unsigned int x){
	int s = 0;
	for (int i = 1; i <= x; i++){
		if(x % i == 0)
			s++;	
	} 
	if (s == 2)
		return 1;
	return 0;
}

int main(){
	unsigned int n;
	cout << "Nhap vao so nguyen duong n : "; cin >> n;
	cout << "Cac so nguyen to trong pham vi " << n << " la : ";
	for (int i = 1; i <= n ; i++){
		if (KT(i) == 1)
			cout << i << " ";
	}
	return 0;
}
*/

		// Ktra so chinh phuong va in ra trong pham vi n 

int KTSCP(int x){
	int count = 0;
	for (int i = 1; i <= x; i++)
	{
		if (i * i == x)
	m
			return 1;
		
	}
	return 0;
}	 

int main(){
	unsigned int n;
	cout << "Nhap vao so nguyen n : "; cin >> n;
	cout << "Cac so chinh phuong trong pham vi " << n << " la : ";
	for (int i = 1; i <= n; i++)
	{
		if(KTSCP(i) == 1)
			cout << i << " ";
	}
	cout << endl;
	return 0;
}

















