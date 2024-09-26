#include<iostream>
using namespace std;

int main(){
	int a,dem=-1,s=0,am=0; 
	while(a!=0){
		cout<<"Nhap a: ";
		cin>>a;
	    dem++;
	    s+=a; 
	    if (a<0){
    		am++; 
    	} 
	} 
	cout <<"so phan tu duoc nhap la: "<< dem <<endl;
	cout <<"gia tri tbc cua day la: "<< s/dem <<"\n";
	cout <<"so phan tu am la: "<< am <<endl; 
}
