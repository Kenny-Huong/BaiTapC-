#include <iostream>
using namespace std;

int main(){
	int n; 
	cout << " Nhap n =  ";
	cin >> n;
	int s=0; 
	for(int i=1; i <= n;i++){
		if (n%i==0){
			cout<<" Uoc cua n la:"<<i << endl; 
		} 
	}
	return 0;
}
