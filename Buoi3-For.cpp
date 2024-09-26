#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

			//Bai 3 : in ra uoc cua n
/*
int main(){
  	unsigned int n;
  	int sum = 0;
	cout << "Nhap n : " ; cin >> n;
	cout << "Uoc cua " << n << " la : ";
	for (int i = 1; i<= n; i++){
		if (n % i == 0)
		cout << i << " ";
	}
	return 0;
}
*/
			//Bai 4 : Bang cuu chuong
/*
int main (){
	unsigned int n;
	cout << "Nhap n : " ; cin >> n;
	cout << "______Bang Cuu Chuong Cua " << n << "_______" << endl;
	for (int i = 1; i <= 10; i++){
		cout << n << " x " << i << " = " << n * i << endl;
	}
}
*/

			//Bai 5 : Tinh tong S = 1 + 3 + 5 + ... + (2n -1)
/*
int main(){
	int n; 
	int sum = 0;
	cout << "Nhap n :" ; cin >> n;
	for (int i = 1; i <= n ; i++){
		if (i % 2 != 0)
		sum += i;
	}
	cout << sum;
	return 0;
}	

*/	
			// S = 2 + 4 + 6 + ... +2n
	//Cach 1 :
/*	
int main(){
	int n;
	long int S = 0;
	cout << "Nhap vao n : "; cin >> n;
	for (int i = 2; i <= 2*n; i += 2){
		S += i;
	}
	cout << "Tong la : " << S  << endl;
	return 0;

}
*/

			//Bai 6 : Tinh tong s = 1 + 1/2 + 1/3 + .. + 1/n
/*
int main(){
	int n;
	float S ;
	S = 0;
	cout << "Nhap n : " ; cin >> n;
	for (int i = 1; i <= n; i++){
	S = S + (1.0/i);
	}	
	cout << "\n Tong S = 1 + 1/2 + .. + 1/" << n << " la : " << S;
	return 0;
}			 
*/

		//Bai 7 : vt tat ca cac so co 4 chu so | a + b = c + d
/*
int main(){
	int a, b, c, d;
	for (int i = 1000; i < 10000; i++){
		a = i/1000;
		b = (i % 1000)/100;
		c = (i % 100)/10;
		d = i % 10;
		if (( a + b ) == ( c + d ))
		cout << i << " ";
	}
	return 0;
}		
*/

		//Bai 4 : vt ctrinh ve hcn bang ngoi sao 
/*			
int main(){
	unsigned int x , y;
	cout << "Nhap gia tri so duong ( x, y ) : ";
    cin >> x >> y; 
	for (int i = 1; i <= x; i++){
		for (int j = 1; j <= y; j++){
			cout << " * ";
		}
		cout << endl;
	}	
	return 0;
}		
*/
/*		 
int main(){
	int n;
	cout << "Nhap n : "; cin >> n;
	int sum = 0;
	for ( int i = 1; i <= n; i++){
		sum += i;
	}
	cout << sum;
	return 0;
} 
*/
/*
int main (){
	int n;
	int sum = 1;
	cin >> n;
	for (int i = 1; i <= n; i++){
		sum *= i;
	}
	cout << sum;
	return 0;	
}
*/		

	//Bai 5 : a) S = 1 + 4 + 9 +... + n^2
	//		  b) S = 1 - 4 + 9 - 16 + .. +((-1)^(n-1))*n^2
/*
int main(){
	int n;
	int sum = 0;
	char choice = ' ';	
	cout << "a) S = 1 + 4 + 9 +... + n^2                 "
	     <<	"b) S = 1 - 4 + 9 - 16 + .. +((-1)^(n-1))*n^2" << endl;
	while (choice != '0'){
	cout << "Nhap lua chon cua ban : " ; cin >> choice;
	switch (choice){
		case 'a':
			case 'A':
				
				cout << "Nhap vao n: "; cin >> n;
			for (int i = 1; i <= n ; i++){
				sum += pow(i,2);
					}
			cout << "Tong la : " << sum <<endl;
		break;
		case 'b':
			case 'B':
				
				cout << "Nhap vao n: "; cin >> n;
			for (int i = 1; i <= n; i++){
				sum += pow(-1,i-1)*pow(i,2);
				}
			cout << "Tong la : " << sum << endl;
		break;	
	}
}
	return 0;
}	
*/
 			//Bai 6 : So hoan hao
/*
int main(){
	unsigned int n;
	cout << "Nhap so nguyen duong n : " ;cin >> n;
	cout << "Cac so hoan hao trong pham vi " << n << "la : " << endl;
	for (int i = 1; i < =n; i++){
		int s = 0;
		for (int j = 1; j < i; j++){
			if (i % j == 0) 
			s += j;
		if (s == i )
			cout << i << " \t";	
		}
	}
	return 0;
}
*/

			//Bai 9 : in ra bang cuu chuong tu 2 - 9
/*
int main (){
	unsigned int n;

	cout << "______Bang Cuu Chuong _______" << endl;
	for (int i = 2; i <= 9; i++){
		for (int j = 1; j <= 10; j++){
			cout << i << " * " << j << " = " << i*j << endl;
		}
		cout << endl;
	}
}	
*/
		//Bai 10 : Tam giac sao
/*
int main(){
	unsigned int x; 
	cout << "Nhap do cao x = " ; cin >> x;
	for (int i = x; i >= 1; i--){
		for (int j = 1; j <= i; j++){
			cout << " * ";
		}
		cout << endl;
	}
	
	return 0;
}		
*/
			//Bai 11 : Giai Bai Toan Ga Va Cho 
/*
int main(){
	int cho, ga;
	for (ga = 0; ga <= 50; ga++)
		for (cho = 0; cho <= 25; cho++)
			if ((ga + cho == 36) && (2*ga + 4*cho == 100 ))
				cout<<" Ga = "<< ga << "\nCho = " << cho;
	return 1;

}
*/

			//Bai 12 : In Ra So Chinh Phuong Trong Pham Vi N
/*			
int main(){
    int n;
    float x,y,i;
    cout<<"Nhap n: "; cin>>n;
    cout<<"Cac so chinh phuong tu 1 den "<<n<<" la:\n";
    for (i = 1; i*i <= n; i++)
        cout << i*i << " ";
}
*/

			//Bai 13 : vt Ctrinh tam giac Pascal

int main(){
	unsigned int x; 
	cout << "Nhap do cao x = " ; cin >> x;
	for (int i = 1; i <= x; i++){
		for (int j = 1; j <= i; j++){
			cout << j;
		}
	   cout << endl;
	}
	
	return 0;
}		




