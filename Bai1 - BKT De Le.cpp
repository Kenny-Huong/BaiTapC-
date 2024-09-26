#include<iostream>
#include<math.h>
using namespace std;

int ktra_scp(int a)
{
	int s = sqrt(a);
	if(s*s == a)
	return 1;
	else 
	return 0;	
}
int ktra_pitago(int a){
	if (ktra_scp(a) == 1){
		for (int i = 3; i < sqrt(a); i++)
		{
			int z = a - i*i;
			if(ktra_scp(z) == 1)
			return 1;	
		}
	}
	return 0;
}
int main(){
	int x;
	cout<<"Nhap so x = "; cin>> x;
	if(ktra_pitago(x) == 1)
	cout << x << " la so Pitago !\n";
	else
	cout << x << " khong phai la so Pitago !\n";	
}
