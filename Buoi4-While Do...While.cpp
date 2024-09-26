#include <iostream>
#include <math.h>
using namespace std;

/*
int main(){
	int i = 1, n;
	long int s = 0;
	cout << "Nhap n : "; cin >> n;
	while ( i <= n){
		s += i;
		i++;	
	}
	cout << "Tong cac so nguyen tu 1 den " << n << " la : " << s << endl;
	return 0;
}
*/

/*
int main(){
	int i = 1, n;
	long int s = 0;
	cout << "Nhap n : "; cin >> n;
	do {
		s += i;
		i++;
	} 
	while ( i <= n);
	cout << "Tong cac so nguyen tu 1 den " << n << " la : " << s << endl;
	return 0;
}
*/

              //S = 1 + 3 + 5 + ... + (2n -1)
/*
int main(){
	int i = 1, n;
	long int s = 0;
	cout << "Nhap n : " ; cin >> n;
	while ( i <= 2* n - 1){   //hoac while ( i <= n){							  //				
		s += i;			 	  //		s = s + ( 2 * i - 1);
		i += 2;				  //		i ++;
	}
	cout << "Tong cac so nguyen tu 1 den " << n << " la : " << s << endl;
	
	return 0;
} 
*/

			//Dem ki tu (k tinh kytu *) va dem ky tu k
/*		
int main(){
	char ch;
	int d = 0, dk = 0;
	do {
		cout << "Nhap vao 1 ky tu "; cin >> ch;
			if (ch != '*') d++;
			if (ch == 'k') dk++;
	}
		while (ch != '*');
		cout << "So ky tu da nhap la : " << d << endl;
		cout << "so ky tu k la : " << dk << endl;
	return 0;
}
*/

		//vt ctrinh nhap vao so nguyen n (0 < n< 50). neu nhap sai yc nhap lai
/*
int main(){
	int n;

	do {
		cout << "Nhap n : "; cin >> n;
		if ( n <= 0 || n >= 50)
		cout << "Nhap lai so n !" << endl;
	}
	while (n <= 0 || n >= 50);
	return 0;
}
*/

 		//vt day so hinh tam giac vuong
 /*		
int main(){
	unsigned int n;
   	cout << "Nhap n : "; cin >> n;
   	int i = 1;
	while (i <= n){
		int j = 1;
			while ( j <= i){
				cout << j << " ";
					j++;
				}
		cout <<	endl;
		i++;
			
	}
	return 0;
}
*/

		// S = 1 + 1/2 + 1/3 + ... + 1/n > a
/*		
int main (){
	float a;
	do {
		cout << "Nhap so thuc a : "; cin >> a;
		if (a <= 1 || a >= 2)
			cout << "Nhap lai so a ! " << endl;		
	}
	while (a <= 1 || a >= 2);
	int i = 1;
	float s = 0;
	do{
		s = s + (float) 1/i ;
		i++;
	}
	while ( s <= a);
	cout << "\nSo n nho nhat la : " << i - 1 << endl;
	cout << "tong la : " << s << endl;
	
	return 0;
} 
*/

			// Bai 3 : Kiem tra so nguyen to
/*
int main(){
	unsigned int n, i = 1, s = 0; 
	cout << "Nhap vao so n : "; cin >> n;
	while (i <= n){
		
		if (n % i == 0) 
			s++; i++;
	}
	if (s == 2)
		cout << n << " la so nguye to ! "<< endl;
	else 
		cout << n << " khong la so nguyen to ! " << endl;
return 0;
}
*/

			//Bai 4 : dem so ptu , tinh tbc , dem spt am

int main(){
	float a, s = 0;
	int d = 0, da = 0, stb = 1;
	cout << "Nhap vao mot so thuc : "; cin >> a;
	do {
		
		if (a != 0){
		      d++;
			}	 
		if (a < 0) 
		      da++;
		s += a;
		stb = (float)s/d;		
	}
	while (a != 0);
		cout << "Co " << d  << " phan tu khong tinh so 0 !" << endl; 
		cout << "Trung binh cong cac so da nhap bang : " 	<< stb << endl;
		cout << "Co " << da << " Phan tu am ! 			  " << endl;
	return 0;
}			

	
	    //Bai 5 :vt ctrinh P = 2*4*6*...*2n
/*
int main(){
	int n,  i = 1;
	long s = 1; 
	cout << "Nhap n : " ; cin >> n;
	while (i <= n){
		s = s * 2 * i;
		i++;	
	}
	cout << "Tich P = " << s << endl;
	return 0;
}
*/

 			// Bai 6 : Doi so nguyen sang so nhi phan 
/* 
int main()
{
	int n;
	cout<<"nhap so ban muon doi sang he nhi phan: ";
	cin>>n;
	while(n<1)
	{
		cout<<"hay nhap lai: ";
		cin>>n; 
	} 
	while(n!=0)
	{
		cout<<n%2;
		n/=2; 
	} 
	cout<<endl; 
	return 0;
}
*/

			//Bai 9 : UCLN BCNN cua 2 so nguyen duong
/*
int main (){
	unsigned int m, n, x, y, UCLN;
	cout << "Nhap 2 so nguyen duong m, n !" << endl;
	cout << "Nhap m : "; cin >> m;
	cout << "Nhap n : "; cin >> n;
	x = m ; y = n;
	while (x != y){
		if (x > y) x = x - y;
		else y = y - x;
	} 
	UCLN = x;
	cout << "UCLN (" << m <<"," << n <<") = "<< UCLN 		<< endl;
	cout << "BCNN (" << m <<"," << n <<") = "<< (m*n)/UCLN 	<< endl;
	return 0; 
} 
*/
			//Bai 10 : Lai suat ngan hang
/*
int main (){
	unsigned int m, n, x, y, UCLN;
	cout << "Nhap 2 so nguyen duong m, n !" << endl;
	cout << "Nhap m : "; cin >> m;
	cout << "Nhap n : "; cin >> n;
	while (m != n){
		if (m > n) m = m - n;
		else n = n - m;
	} 
	UCLN = m;
	cout << "UCLN (" << m <<"," << n <<") = "<< UCLN 		<< endl;
	cout << "BCNN (" << m <<"," << n <<") = "<< (m*n)/UCLN 	<< endl;
	return 0; 
} 
*/




























