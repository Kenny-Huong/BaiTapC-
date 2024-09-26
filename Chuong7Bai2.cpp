#include<iostream>
using namespace std;
 
int main(){
	int n;
	cout<<"So phan tu cua mang la: ";
	cin>>n;
	while(n<1){
		cout<<"Nhap lai so phan tu cua mang: ";
		cin>>n; 
	} 
	int a[n];
	int *p=a; 
	cout<<"Nhap gia tri cua mang :\n ";
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>*(p+i); 
	} 
	for(int i=0;i<n;i++){
		*(p+i)+=2; 
	} 
	cout<<"Mang moi sau khi tang 2 don vi la : \n"; 
	for(int i = 0 ; i < n; i++){
		cout<<"a["<<i<<"] = "<<*(p + i)<<endl;
	}
}
