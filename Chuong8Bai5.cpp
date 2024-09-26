//viet ham de quy tinh S = 1 + 2 + 3 + .. + (n - 1) + n

#include <iostream>
using namespace std;

int S(int n){
	if(n == 1)
	   return 1;
	else 
	   return S(n -1) + n;
	       
}
int main(){
	int n;
	cout << "Nhap n : ";
	cin >> n;
	cout << "Tong S bang : "<<S(n);	 
 
return 0;
}
